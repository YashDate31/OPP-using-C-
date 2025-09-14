# PowerShell script to fix namespace usage in all C++ files

Get-ChildItem -Path . -Filter "*.cpp" -Recurse | ForEach-Object {
    $filePath = $_.FullName
    $content = Get-Content $filePath -Raw
    
    # Add "using namespace std;" after #include statements if not present
    if ($content -notmatch "using namespace std;") {
        $content = $content -replace "(#include <.*?>)`n", "`$1`nusing namespace std;`n"
    }
    
    # Replace std::cout with cout
    $content = $content -replace "std::cout", "cout"
    
    # Replace std::cin with cin
    $content = $content -replace "std::cin", "cin"
    
    # Replace std::endl with endl
    $content = $content -replace "std::endl", "endl"
    
    # Replace std::string with string
    $content = $content -replace "std::string", "string"
    
    # Replace std::getline with getline
    $content = $content -replace "std::getline", "getline"
    
    # Write the updated content back to the file
    Set-Content -Path $filePath -Value $content
    
    Write-Host "Updated: $filePath"
}