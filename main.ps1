# 将 "hello" 写入 hello.txt 文件
Set-Content -Path "hello.txt" -Value "hello"

# 读取 hello.txt 文件内容并显示
Get-Content -Path "hello.txt"

# 等待用户输入
Read-Host "Press Enter to exit"
