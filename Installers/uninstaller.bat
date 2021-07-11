rmdir /S /Q "C:\Star Wars Sounds\"
reg import "Registry Files\DefaultSystemSoundsScheme.reg"
reg delete "HKEY_CURRENT_USER\AppEvents\Schemes\Names\Star 0" /f