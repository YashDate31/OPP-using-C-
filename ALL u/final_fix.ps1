# Final PowerShell script to properly place namespace after includes

Get-ChildItem -Path . -Filter "*.cpp" -Recurse | ForEach-Object {
    $filePath = $_.FullName
    $lines = Get-Content $filePath
    
    $newContent = @()
    $includeLines = @()
    $otherLines = @()
    $hasNamespace = $false
    $processingIncludes = $true
    
    foreach ($line in $lines) {
        if ($line -match "using namespace std;") {
            $hasNamespace = $true
            continue  # Skip this line, we'll add it in the right place
        }
        
        if ($line -match "#include" -and $processingIncludes) {
            $includeLines += $line
        }
        elseif ($line -match "^$" -and $processingIncludes) {
            # Empty line during includes, continue processing includes
            continue
        }
        else {
            $processingIncludes = $false
            $otherLines += $line
        }
    }
    
    # Build the new content
    $newContent += $includeLines
    $newContent += "using namespace std;"
    $newContent += ""
    $newContent += $otherLines
    
    # Additional replacements for any remaining std:: references
    $content = $newContent -join "`n"
    $content = $content -replace "std::ios::", "ios::"
    
    # Write the updated content back to the file
    Set-Content -Path $filePath -Value $content
    
    Write-Host "Fixed: $filePath"
}