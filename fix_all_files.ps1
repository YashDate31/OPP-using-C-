# PowerShell script to properly fix namespace usage in all C++ files

Get-ChildItem -Path . -Filter "*.cpp" -Recurse | ForEach-Object {
    $filePath = $_.FullName
    $lines = Get-Content $filePath
    
    $newContent = @()
    $hasNamespace = $false
    $includeEnded = $false
    
    foreach ($line in $lines) {
        $newContent += $line
        
        if ($line -match "using namespace std;") {
            $hasNamespace = $true
        }
        
        if ($line -match "#include" -and -not $includeEnded) {
            # Continue adding includes
        }
        elseif ($line -notmatch "#include" -and -not $hasNamespace -and -not $includeEnded) {
            # First non-include line, add namespace if not present
            $newContent += "using namespace std;"
            $newContent += ""
            $hasNamespace = $true
            $includeEnded = $true
        }
    }
    
    # Replace std:: prefixes
    $content = $newContent -join "`n"
    $content = $content -replace "std::cout", "cout"
    $content = $content -replace "std::cin", "cin"
    $content = $content -replace "std::endl", "endl"
    $content = $content -replace "std::string", "string"
    $content = $content -replace "std::getline", "getline"
    $content = $content -replace "std::ofstream", "ofstream"
    $content = $content -replace "std::ifstream", "ifstream"
    $content = $content -replace "std::fstream", "fstream"
    $content = $content -replace "std::cerr", "cerr"
    
    # Write the updated content back to the file
    Set-Content -Path $filePath -Value $content
    
    Write-Host "Updated: $filePath"
}