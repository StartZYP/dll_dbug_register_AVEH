
//
// created by AheadLib
// github:https://github.com/strivexjun/AheadLib-x86-x64
//

#include <windows.h>
#include <Shlwapi.h>

#pragma comment( lib, "Shlwapi.lib")

#pragma comment(linker, "/EXPORT:Noname100=_AheadLib_Unnamed100,@100,NONAME")
#pragma comment(linker, "/EXPORT:ADVANCEDSETUPDIALOG=_AheadLib_ADVANCEDSETUPDIALOG,@101")
#pragma comment(linker, "/EXPORT:AdvancedSetupDialog=_AheadLib_AdvancedSetupDialog,@102")
#pragma comment(linker, "/EXPORT:ConvertAnsiDevModeToUnicodeDevmode=_AheadLib_ConvertAnsiDevModeToUnicodeDevmode,@103")
#pragma comment(linker, "/EXPORT:ConvertUnicodeDevModeToAnsiDevmode=_AheadLib_ConvertUnicodeDevModeToAnsiDevmode,@104")
#pragma comment(linker, "/EXPORT:DEVICEMODE=_AheadLib_DEVICEMODE,@105")
#pragma comment(linker, "/EXPORT:DeviceMode=_AheadLib_DeviceMode,@106")
#pragma comment(linker, "/EXPORT:DocumentEvent=_AheadLib_DocumentEvent,@107")
#pragma comment(linker, "/EXPORT:PerfClose=_AheadLib_PerfClose,@108")
#pragma comment(linker, "/EXPORT:PerfCollect=_AheadLib_PerfCollect,@109")
#pragma comment(linker, "/EXPORT:PerfOpen=_AheadLib_PerfOpen,@110")
#pragma comment(linker, "/EXPORT:QueryColorProfile=_AheadLib_QueryColorProfile,@111")
#pragma comment(linker, "/EXPORT:QueryRemoteFonts=_AheadLib_QueryRemoteFonts,@112")
#pragma comment(linker, "/EXPORT:QuerySpoolMode=_AheadLib_QuerySpoolMode,@113")
#pragma comment(linker, "/EXPORT:SetSplwow64AppCompat=_AheadLib_SetSplwow64AppCompat,@114")
#pragma comment(linker, "/EXPORT:SpoolerDevQueryPrintW=_AheadLib_SpoolerDevQueryPrintW,@115")
#pragma comment(linker, "/EXPORT:StartDocDlgW=_AheadLib_StartDocDlgW,@116")
#pragma comment(linker, "/EXPORT:AbortPrinter=_AheadLib_AbortPrinter,@117")
#pragma comment(linker, "/EXPORT:AddFormA=_AheadLib_AddFormA,@118")
#pragma comment(linker, "/EXPORT:AddFormW=_AheadLib_AddFormW,@119")
#pragma comment(linker, "/EXPORT:AddJobA=_AheadLib_AddJobA,@120")
#pragma comment(linker, "/EXPORT:AddJobW=_AheadLib_AddJobW,@121")
#pragma comment(linker, "/EXPORT:AddMonitorA=_AheadLib_AddMonitorA,@122")
#pragma comment(linker, "/EXPORT:AddMonitorW=_AheadLib_AddMonitorW,@123")
#pragma comment(linker, "/EXPORT:AddPortA=_AheadLib_AddPortA,@124")
#pragma comment(linker, "/EXPORT:AddPortExA=_AheadLib_AddPortExA,@125")
#pragma comment(linker, "/EXPORT:AddPortExW=_AheadLib_AddPortExW,@126")
#pragma comment(linker, "/EXPORT:AddPortW=_AheadLib_AddPortW,@127")
#pragma comment(linker, "/EXPORT:AddPrintProcessorA=_AheadLib_AddPrintProcessorA,@128")
#pragma comment(linker, "/EXPORT:AddPrintProcessorW=_AheadLib_AddPrintProcessorW,@129")
#pragma comment(linker, "/EXPORT:AddPrintProvidorA=_AheadLib_AddPrintProvidorA,@130")
#pragma comment(linker, "/EXPORT:AddPrintProvidorW=_AheadLib_AddPrintProvidorW,@131")
#pragma comment(linker, "/EXPORT:AddPrinterA=_AheadLib_AddPrinterA,@132")
#pragma comment(linker, "/EXPORT:AddPrinterConnection2A=_AheadLib_AddPrinterConnection2A,@133")
#pragma comment(linker, "/EXPORT:AddPrinterConnection2W=_AheadLib_AddPrinterConnection2W,@134")
#pragma comment(linker, "/EXPORT:AddPrinterConnectionA=_AheadLib_AddPrinterConnectionA,@135")
#pragma comment(linker, "/EXPORT:AddPrinterConnectionW=_AheadLib_AddPrinterConnectionW,@136")
#pragma comment(linker, "/EXPORT:AddPrinterDriverA=_AheadLib_AddPrinterDriverA,@137")
#pragma comment(linker, "/EXPORT:AddPrinterDriverExA=_AheadLib_AddPrinterDriverExA,@138")
#pragma comment(linker, "/EXPORT:AddPrinterDriverExW=_AheadLib_AddPrinterDriverExW,@139")
#pragma comment(linker, "/EXPORT:AddPrinterDriverW=_AheadLib_AddPrinterDriverW,@140")
#pragma comment(linker, "/EXPORT:AddPrinterW=_AheadLib_AddPrinterW,@141")
#pragma comment(linker, "/EXPORT:AdvancedDocumentPropertiesA=_AheadLib_AdvancedDocumentPropertiesA,@142")
#pragma comment(linker, "/EXPORT:AdvancedDocumentPropertiesW=_AheadLib_AdvancedDocumentPropertiesW,@143")
#pragma comment(linker, "/EXPORT:ClosePrinter=_AheadLib_ClosePrinter,@144")
#pragma comment(linker, "/EXPORT:CloseSpoolFileHandle=_AheadLib_CloseSpoolFileHandle,@145")
#pragma comment(linker, "/EXPORT:CommitSpoolData=_AheadLib_CommitSpoolData,@146")
#pragma comment(linker, "/EXPORT:ConfigurePortA=_AheadLib_ConfigurePortA,@147")
#pragma comment(linker, "/EXPORT:ConfigurePortW=_AheadLib_ConfigurePortW,@148")
#pragma comment(linker, "/EXPORT:ConnectToPrinterDlg=_AheadLib_ConnectToPrinterDlg,@149")
#pragma comment(linker, "/EXPORT:CorePrinterDriverInstalledA=_AheadLib_CorePrinterDriverInstalledA,@150")
#pragma comment(linker, "/EXPORT:CorePrinterDriverInstalledW=_AheadLib_CorePrinterDriverInstalledW,@151")
#pragma comment(linker, "/EXPORT:CreatePrintAsyncNotifyChannel=_AheadLib_CreatePrintAsyncNotifyChannel,@152")
#pragma comment(linker, "/EXPORT:CreatePrinterIC=_AheadLib_CreatePrinterIC,@153")
#pragma comment(linker, "/EXPORT:DEVICECAPABILITIES=_AheadLib_DEVICECAPABILITIES,@154")
#pragma comment(linker, "/EXPORT:DeleteFormA=_AheadLib_DeleteFormA,@155")
#pragma comment(linker, "/EXPORT:DeleteFormW=_AheadLib_DeleteFormW,@156")
#pragma comment(linker, "/EXPORT:DeleteJobNamedProperty=_AheadLib_DeleteJobNamedProperty,@157")
#pragma comment(linker, "/EXPORT:DeleteMonitorA=_AheadLib_DeleteMonitorA,@158")
#pragma comment(linker, "/EXPORT:DeleteMonitorW=_AheadLib_DeleteMonitorW,@159")
#pragma comment(linker, "/EXPORT:DeletePortA=_AheadLib_DeletePortA,@160")
#pragma comment(linker, "/EXPORT:DeletePortW=_AheadLib_DeletePortW,@161")
#pragma comment(linker, "/EXPORT:DeletePrintProcessorA=_AheadLib_DeletePrintProcessorA,@162")
#pragma comment(linker, "/EXPORT:DeletePrintProcessorW=_AheadLib_DeletePrintProcessorW,@163")
#pragma comment(linker, "/EXPORT:DeletePrintProvidorA=_AheadLib_DeletePrintProvidorA,@164")
#pragma comment(linker, "/EXPORT:DeletePrintProvidorW=_AheadLib_DeletePrintProvidorW,@165")
#pragma comment(linker, "/EXPORT:DeletePrinter=_AheadLib_DeletePrinter,@166")
#pragma comment(linker, "/EXPORT:DeletePrinterConnectionA=_AheadLib_DeletePrinterConnectionA,@167")
#pragma comment(linker, "/EXPORT:DeletePrinterConnectionW=_AheadLib_DeletePrinterConnectionW,@168")
#pragma comment(linker, "/EXPORT:DeletePrinterDataA=_AheadLib_DeletePrinterDataA,@169")
#pragma comment(linker, "/EXPORT:DeletePrinterDataExA=_AheadLib_DeletePrinterDataExA,@170")
#pragma comment(linker, "/EXPORT:DeletePrinterDataExW=_AheadLib_DeletePrinterDataExW,@171")
#pragma comment(linker, "/EXPORT:DeletePrinterDataW=_AheadLib_DeletePrinterDataW,@172")
#pragma comment(linker, "/EXPORT:DeletePrinterDriverA=_AheadLib_DeletePrinterDriverA,@173")
#pragma comment(linker, "/EXPORT:DeletePrinterDriverExA=_AheadLib_DeletePrinterDriverExA,@174")
#pragma comment(linker, "/EXPORT:DeletePrinterDriverExW=_AheadLib_DeletePrinterDriverExW,@175")
#pragma comment(linker, "/EXPORT:DeletePrinterDriverPackageA=_AheadLib_DeletePrinterDriverPackageA,@176")
#pragma comment(linker, "/EXPORT:DeletePrinterDriverPackageW=_AheadLib_DeletePrinterDriverPackageW,@177")
#pragma comment(linker, "/EXPORT:DeletePrinterDriverW=_AheadLib_DeletePrinterDriverW,@178")
#pragma comment(linker, "/EXPORT:DeletePrinterIC=_AheadLib_DeletePrinterIC,@179")
#pragma comment(linker, "/EXPORT:DeletePrinterKeyA=_AheadLib_DeletePrinterKeyA,@180")
#pragma comment(linker, "/EXPORT:DeletePrinterKeyW=_AheadLib_DeletePrinterKeyW,@181")
#pragma comment(linker, "/EXPORT:DevQueryPrint=_AheadLib_DevQueryPrint,@182")
#pragma comment(linker, "/EXPORT:DevQueryPrintEx=_AheadLib_DevQueryPrintEx,@183")
#pragma comment(linker, "/EXPORT:DeviceCapabilities=_AheadLib_DeviceCapabilities,@184")
#pragma comment(linker, "/EXPORT:DeviceCapabilitiesA=_AheadLib_DeviceCapabilitiesA,@185")
#pragma comment(linker, "/EXPORT:DeviceCapabilitiesW=_AheadLib_DeviceCapabilitiesW,@186")
#pragma comment(linker, "/EXPORT:DevicePropertySheets=_AheadLib_DevicePropertySheets,@187")
#pragma comment(linker, "/EXPORT:DocumentPropertiesA=_AheadLib_DocumentPropertiesA,@188")
#pragma comment(linker, "/EXPORT:DocumentPropertiesW=_AheadLib_DocumentPropertiesW,@189")
#pragma comment(linker, "/EXPORT:DocumentPropertySheets=_AheadLib_DocumentPropertySheets,@190")
#pragma comment(linker, "/EXPORT:EXTDEVICEMODE=_AheadLib_EXTDEVICEMODE,@191")
#pragma comment(linker, "/EXPORT:EndDocPrinter=_AheadLib_EndDocPrinter,@192")
#pragma comment(linker, "/EXPORT:EndPagePrinter=_AheadLib_EndPagePrinter,@193")
#pragma comment(linker, "/EXPORT:EnumFormsA=_AheadLib_EnumFormsA,@194")
#pragma comment(linker, "/EXPORT:EnumFormsW=_AheadLib_EnumFormsW,@195")
#pragma comment(linker, "/EXPORT:EnumJobNamedProperties=_AheadLib_EnumJobNamedProperties,@196")
#pragma comment(linker, "/EXPORT:EnumJobsA=_AheadLib_EnumJobsA,@197")
#pragma comment(linker, "/EXPORT:EnumJobsW=_AheadLib_EnumJobsW,@198")
#pragma comment(linker, "/EXPORT:EnumMonitorsA=_AheadLib_EnumMonitorsA,@199")
#pragma comment(linker, "/EXPORT:EnumMonitorsW=_AheadLib_EnumMonitorsW,@200")
#pragma comment(linker, "/EXPORT:GetDefaultPrinterA=_AheadLib_GetDefaultPrinterA,@201")
#pragma comment(linker, "/EXPORT:SetDefaultPrinterA=_AheadLib_SetDefaultPrinterA,@202")
#pragma comment(linker, "/EXPORT:GetDefaultPrinterW=_AheadLib_GetDefaultPrinterW,@203")
#pragma comment(linker, "/EXPORT:SetDefaultPrinterW=_AheadLib_SetDefaultPrinterW,@204")
#pragma comment(linker, "/EXPORT:Noname205=_AheadLib_Unnamed205,@205,NONAME")
#pragma comment(linker, "/EXPORT:Noname206=_AheadLib_Unnamed206,@206,NONAME")
#pragma comment(linker, "/EXPORT:Noname207=_AheadLib_Unnamed207,@207,NONAME")
#pragma comment(linker, "/EXPORT:Noname208=_AheadLib_Unnamed208,@208,NONAME")
#pragma comment(linker, "/EXPORT:Noname209=_AheadLib_Unnamed209,@209,NONAME")
#pragma comment(linker, "/EXPORT:Noname210=_AheadLib_Unnamed210,@210,NONAME")
#pragma comment(linker, "/EXPORT:Noname211=_AheadLib_Unnamed211,@211,NONAME")
#pragma comment(linker, "/EXPORT:Noname212=_AheadLib_Unnamed212,@212,NONAME")
#pragma comment(linker, "/EXPORT:Noname213=_AheadLib_Unnamed213,@213,NONAME")
#pragma comment(linker, "/EXPORT:Noname214=_AheadLib_Unnamed214,@214,NONAME")
#pragma comment(linker, "/EXPORT:Noname215=_AheadLib_Unnamed215,@215,NONAME")
#pragma comment(linker, "/EXPORT:Noname216=_AheadLib_Unnamed216,@216,NONAME")
#pragma comment(linker, "/EXPORT:Noname217=_AheadLib_Unnamed217,@217,NONAME")
#pragma comment(linker, "/EXPORT:Noname218=_AheadLib_Unnamed218,@218,NONAME")
#pragma comment(linker, "/EXPORT:Noname219=_AheadLib_Unnamed219,@219,NONAME")
#pragma comment(linker, "/EXPORT:Noname220=_AheadLib_Unnamed220,@220,NONAME")
#pragma comment(linker, "/EXPORT:Noname221=_AheadLib_Unnamed221,@221,NONAME")
#pragma comment(linker, "/EXPORT:Noname222=_AheadLib_Unnamed222,@222,NONAME")
#pragma comment(linker, "/EXPORT:Noname223=_AheadLib_Unnamed223,@223,NONAME")
#pragma comment(linker, "/EXPORT:Noname224=_AheadLib_Unnamed224,@224,NONAME")
#pragma comment(linker, "/EXPORT:EnumPortsA=_AheadLib_EnumPortsA,@225")
#pragma comment(linker, "/EXPORT:Noname226=_AheadLib_Unnamed226,@226,NONAME")
#pragma comment(linker, "/EXPORT:Noname227=_AheadLib_Unnamed227,@227,NONAME")
#pragma comment(linker, "/EXPORT:Noname228=_AheadLib_Unnamed228,@228,NONAME")
#pragma comment(linker, "/EXPORT:Noname229=_AheadLib_Unnamed229,@229,NONAME")
#pragma comment(linker, "/EXPORT:Noname230=_AheadLib_Unnamed230,@230,NONAME")
#pragma comment(linker, "/EXPORT:Noname231=_AheadLib_Unnamed231,@231,NONAME")
#pragma comment(linker, "/EXPORT:EnumPortsW=_AheadLib_EnumPortsW,@232")
#pragma comment(linker, "/EXPORT:Noname233=_AheadLib_Unnamed233,@233,NONAME")
#pragma comment(linker, "/EXPORT:Noname234=_AheadLib_Unnamed234,@234,NONAME")
#pragma comment(linker, "/EXPORT:EnumPrintProcessorDatatypesA=_AheadLib_EnumPrintProcessorDatatypesA,@235")
#pragma comment(linker, "/EXPORT:EnumPrintProcessorDatatypesW=_AheadLib_EnumPrintProcessorDatatypesW,@236")
#pragma comment(linker, "/EXPORT:EnumPrintProcessorsA=_AheadLib_EnumPrintProcessorsA,@237")
#pragma comment(linker, "/EXPORT:EnumPrintProcessorsW=_AheadLib_EnumPrintProcessorsW,@238")
#pragma comment(linker, "/EXPORT:EnumPrinterDataA=_AheadLib_EnumPrinterDataA,@239")
#pragma comment(linker, "/EXPORT:EnumPrinterDataExA=_AheadLib_EnumPrinterDataExA,@240")
#pragma comment(linker, "/EXPORT:EnumPrinterDataExW=_AheadLib_EnumPrinterDataExW,@241")
#pragma comment(linker, "/EXPORT:EnumPrinterDataW=_AheadLib_EnumPrinterDataW,@242")
#pragma comment(linker, "/EXPORT:EnumPrinterDriversA=_AheadLib_EnumPrinterDriversA,@243")
#pragma comment(linker, "/EXPORT:EnumPrinterDriversW=_AheadLib_EnumPrinterDriversW,@244")
#pragma comment(linker, "/EXPORT:EnumPrinterKeyA=_AheadLib_EnumPrinterKeyA,@245")
#pragma comment(linker, "/EXPORT:EnumPrinterKeyW=_AheadLib_EnumPrinterKeyW,@246")
#pragma comment(linker, "/EXPORT:EnumPrintersA=_AheadLib_EnumPrintersA,@247")
#pragma comment(linker, "/EXPORT:EnumPrintersW=_AheadLib_EnumPrintersW,@248")
#pragma comment(linker, "/EXPORT:ExtDeviceMode=_AheadLib_ExtDeviceMode,@249")
#pragma comment(linker, "/EXPORT:Noname250=_AheadLib_Unnamed250,@250,NONAME")
#pragma comment(linker, "/EXPORT:Noname251=_AheadLib_Unnamed251,@251,NONAME")
#pragma comment(linker, "/EXPORT:Noname252=_AheadLib_Unnamed252,@252,NONAME")
#pragma comment(linker, "/EXPORT:Noname253=_AheadLib_Unnamed253,@253,NONAME")
#pragma comment(linker, "/EXPORT:Noname254=_AheadLib_Unnamed254,@254,NONAME")
#pragma comment(linker, "/EXPORT:Noname255=_AheadLib_Unnamed255,@255,NONAME")
#pragma comment(linker, "/EXPORT:Noname256=_AheadLib_Unnamed256,@256,NONAME")
#pragma comment(linker, "/EXPORT:Noname257=_AheadLib_Unnamed257,@257,NONAME")
#pragma comment(linker, "/EXPORT:Noname258=_AheadLib_Unnamed258,@258,NONAME")
#pragma comment(linker, "/EXPORT:Noname259=_AheadLib_Unnamed259,@259,NONAME")
#pragma comment(linker, "/EXPORT:Noname260=_AheadLib_Unnamed260,@260,NONAME")
#pragma comment(linker, "/EXPORT:Noname261=_AheadLib_Unnamed261,@261,NONAME")
#pragma comment(linker, "/EXPORT:Noname262=_AheadLib_Unnamed262,@262,NONAME")
#pragma comment(linker, "/EXPORT:FindClosePrinterChangeNotification=_AheadLib_FindClosePrinterChangeNotification,@263")
#pragma comment(linker, "/EXPORT:FindFirstPrinterChangeNotification=_AheadLib_FindFirstPrinterChangeNotification,@264")
#pragma comment(linker, "/EXPORT:FindNextPrinterChangeNotification=_AheadLib_FindNextPrinterChangeNotification,@265")
#pragma comment(linker, "/EXPORT:FlushPrinter=_AheadLib_FlushPrinter,@266")
#pragma comment(linker, "/EXPORT:FreePrintNamedPropertyArray=_AheadLib_FreePrintNamedPropertyArray,@267")
#pragma comment(linker, "/EXPORT:FreePrintPropertyValue=_AheadLib_FreePrintPropertyValue,@268")
#pragma comment(linker, "/EXPORT:FreePrinterNotifyInfo=_AheadLib_FreePrinterNotifyInfo,@269")
#pragma comment(linker, "/EXPORT:GetCorePrinterDriversA=_AheadLib_GetCorePrinterDriversA,@270")
#pragma comment(linker, "/EXPORT:GetCorePrinterDriversW=_AheadLib_GetCorePrinterDriversW,@271")
#pragma comment(linker, "/EXPORT:GetFormA=_AheadLib_GetFormA,@272")
#pragma comment(linker, "/EXPORT:GetFormW=_AheadLib_GetFormW,@273")
#pragma comment(linker, "/EXPORT:GetJobA=_AheadLib_GetJobA,@274")
#pragma comment(linker, "/EXPORT:GetJobNamedPropertyValue=_AheadLib_GetJobNamedPropertyValue,@275")
#pragma comment(linker, "/EXPORT:GetJobW=_AheadLib_GetJobW,@276")
#pragma comment(linker, "/EXPORT:GetPrintExecutionData=_AheadLib_GetPrintExecutionData,@277")
#pragma comment(linker, "/EXPORT:GetPrintOutputInfo=_AheadLib_GetPrintOutputInfo,@278")
#pragma comment(linker, "/EXPORT:GetPrintProcessorDirectoryA=_AheadLib_GetPrintProcessorDirectoryA,@279")
#pragma comment(linker, "/EXPORT:GetPrintProcessorDirectoryW=_AheadLib_GetPrintProcessorDirectoryW,@280")
#pragma comment(linker, "/EXPORT:GetPrinterA=_AheadLib_GetPrinterA,@281")
#pragma comment(linker, "/EXPORT:GetPrinterDataA=_AheadLib_GetPrinterDataA,@282")
#pragma comment(linker, "/EXPORT:GetPrinterDataExA=_AheadLib_GetPrinterDataExA,@283")
#pragma comment(linker, "/EXPORT:GetPrinterDataExW=_AheadLib_GetPrinterDataExW,@284")
#pragma comment(linker, "/EXPORT:GetPrinterDataW=_AheadLib_GetPrinterDataW,@285")
#pragma comment(linker, "/EXPORT:GetPrinterDriver2A=_AheadLib_GetPrinterDriver2A,@286")
#pragma comment(linker, "/EXPORT:GetPrinterDriver2W=_AheadLib_GetPrinterDriver2W,@287")
#pragma comment(linker, "/EXPORT:GetPrinterDriverA=_AheadLib_GetPrinterDriverA,@288")
#pragma comment(linker, "/EXPORT:GetPrinterDriverDirectoryA=_AheadLib_GetPrinterDriverDirectoryA,@289")
#pragma comment(linker, "/EXPORT:GetPrinterDriverDirectoryW=_AheadLib_GetPrinterDriverDirectoryW,@290")
#pragma comment(linker, "/EXPORT:GetPrinterDriverPackagePathA=_AheadLib_GetPrinterDriverPackagePathA,@291")
#pragma comment(linker, "/EXPORT:GetPrinterDriverPackagePathW=_AheadLib_GetPrinterDriverPackagePathW,@292")
#pragma comment(linker, "/EXPORT:GetPrinterDriverW=_AheadLib_GetPrinterDriverW,@293")
#pragma comment(linker, "/EXPORT:GetPrinterW=_AheadLib_GetPrinterW,@294")
#pragma comment(linker, "/EXPORT:GetSpoolFileHandle=_AheadLib_GetSpoolFileHandle,@295")
#pragma comment(linker, "/EXPORT:InstallPrinterDriverFromPackageA=_AheadLib_InstallPrinterDriverFromPackageA,@296")
#pragma comment(linker, "/EXPORT:InstallPrinterDriverFromPackageW=_AheadLib_InstallPrinterDriverFromPackageW,@297")
#pragma comment(linker, "/EXPORT:IsValidDevmodeA=_AheadLib_IsValidDevmodeA,@298")
#pragma comment(linker, "/EXPORT:IsValidDevmodeW=_AheadLib_IsValidDevmodeW,@299")
#pragma comment(linker, "/EXPORT:OpenPrinter2A=_AheadLib_OpenPrinter2A,@300")
#pragma comment(linker, "/EXPORT:OpenPrinter2W=_AheadLib_OpenPrinter2W,@301")
#pragma comment(linker, "/EXPORT:OpenPrinterA=_AheadLib_OpenPrinterA,@302")
#pragma comment(linker, "/EXPORT:OpenPrinterW=_AheadLib_OpenPrinterW,@303")
#pragma comment(linker, "/EXPORT:PlayGdiScriptOnPrinterIC=_AheadLib_PlayGdiScriptOnPrinterIC,@304")
#pragma comment(linker, "/EXPORT:PrinterMessageBoxA=_AheadLib_PrinterMessageBoxA,@305")
#pragma comment(linker, "/EXPORT:PrinterMessageBoxW=_AheadLib_PrinterMessageBoxW,@306")
#pragma comment(linker, "/EXPORT:PrinterProperties=_AheadLib_PrinterProperties,@307")
#pragma comment(linker, "/EXPORT:ReadPrinter=_AheadLib_ReadPrinter,@308")
#pragma comment(linker, "/EXPORT:RegisterForPrintAsyncNotifications=_AheadLib_RegisterForPrintAsyncNotifications,@309")
#pragma comment(linker, "/EXPORT:ReportJobProcessingProgress=_AheadLib_ReportJobProcessingProgress,@310")
#pragma comment(linker, "/EXPORT:ResetPrinterA=_AheadLib_ResetPrinterA,@311")
#pragma comment(linker, "/EXPORT:ResetPrinterW=_AheadLib_ResetPrinterW,@312")
#pragma comment(linker, "/EXPORT:ScheduleJob=_AheadLib_ScheduleJob,@313")
#pragma comment(linker, "/EXPORT:SeekPrinter=_AheadLib_SeekPrinter,@314")
#pragma comment(linker, "/EXPORT:SetFormA=_AheadLib_SetFormA,@315")
#pragma comment(linker, "/EXPORT:SetFormW=_AheadLib_SetFormW,@316")
#pragma comment(linker, "/EXPORT:SetJobA=_AheadLib_SetJobA,@317")
#pragma comment(linker, "/EXPORT:SetJobNamedProperty=_AheadLib_SetJobNamedProperty,@318")
#pragma comment(linker, "/EXPORT:SetJobW=_AheadLib_SetJobW,@319")
#pragma comment(linker, "/EXPORT:SetPortA=_AheadLib_SetPortA,@320")
#pragma comment(linker, "/EXPORT:SetPortW=_AheadLib_SetPortW,@321")
#pragma comment(linker, "/EXPORT:SetPrinterA=_AheadLib_SetPrinterA,@322")
#pragma comment(linker, "/EXPORT:SetPrinterDataA=_AheadLib_SetPrinterDataA,@323")
#pragma comment(linker, "/EXPORT:SetPrinterDataExA=_AheadLib_SetPrinterDataExA,@324")
#pragma comment(linker, "/EXPORT:SetPrinterDataExW=_AheadLib_SetPrinterDataExW,@325")
#pragma comment(linker, "/EXPORT:SetPrinterDataW=_AheadLib_SetPrinterDataW,@326")
#pragma comment(linker, "/EXPORT:SetPrinterW=_AheadLib_SetPrinterW,@327")
#pragma comment(linker, "/EXPORT:SplDriverUnloadComplete=_AheadLib_SplDriverUnloadComplete,@328")
#pragma comment(linker, "/EXPORT:SpoolerPrinterEvent=_AheadLib_SpoolerPrinterEvent,@329")
#pragma comment(linker, "/EXPORT:StartDocDlgA=_AheadLib_StartDocDlgA,@330")
#pragma comment(linker, "/EXPORT:StartDocPrinterA=_AheadLib_StartDocPrinterA,@331")
#pragma comment(linker, "/EXPORT:StartDocPrinterW=_AheadLib_StartDocPrinterW,@332")
#pragma comment(linker, "/EXPORT:StartPagePrinter=_AheadLib_StartPagePrinter,@333")
#pragma comment(linker, "/EXPORT:UnRegisterForPrintAsyncNotifications=_AheadLib_UnRegisterForPrintAsyncNotifications,@334")
#pragma comment(linker, "/EXPORT:UploadPrinterDriverPackageA=_AheadLib_UploadPrinterDriverPackageA,@335")
#pragma comment(linker, "/EXPORT:UploadPrinterDriverPackageW=_AheadLib_UploadPrinterDriverPackageW,@336")
#pragma comment(linker, "/EXPORT:WaitForPrinterChange=_AheadLib_WaitForPrinterChange,@337")
#pragma comment(linker, "/EXPORT:Noname338=_AheadLib_Unnamed338,@338,NONAME")
#pragma comment(linker, "/EXPORT:Noname339=_AheadLib_Unnamed339,@339,NONAME")
#pragma comment(linker, "/EXPORT:Noname340=_AheadLib_Unnamed340,@340,NONAME")
#pragma comment(linker, "/EXPORT:WritePrinter=_AheadLib_WritePrinter,@341")
#pragma comment(linker, "/EXPORT:XcvDataW=_AheadLib_XcvDataW,@342")
#pragma comment(linker, "/EXPORT:Noname361=_AheadLib_Unnamed361,@361,NONAME")
#pragma comment(linker, "/EXPORT:Noname362=_AheadLib_Unnamed362,@362,NONAME")
#pragma comment(linker, "/EXPORT:Noname363=_AheadLib_Unnamed363,@363,NONAME")


PVOID pfnAheadLib_Unnamed100;
PVOID pfnAheadLib_ADVANCEDSETUPDIALOG;
PVOID pfnAheadLib_AdvancedSetupDialog;
PVOID pfnAheadLib_ConvertAnsiDevModeToUnicodeDevmode;
PVOID pfnAheadLib_ConvertUnicodeDevModeToAnsiDevmode;
PVOID pfnAheadLib_DEVICEMODE;
PVOID pfnAheadLib_DeviceMode;
PVOID pfnAheadLib_DocumentEvent;
PVOID pfnAheadLib_PerfClose;
PVOID pfnAheadLib_PerfCollect;
PVOID pfnAheadLib_PerfOpen;
PVOID pfnAheadLib_QueryColorProfile;
PVOID pfnAheadLib_QueryRemoteFonts;
PVOID pfnAheadLib_QuerySpoolMode;
PVOID pfnAheadLib_SetSplwow64AppCompat;
PVOID pfnAheadLib_SpoolerDevQueryPrintW;
PVOID pfnAheadLib_StartDocDlgW;
PVOID pfnAheadLib_AbortPrinter;
PVOID pfnAheadLib_AddFormA;
PVOID pfnAheadLib_AddFormW;
PVOID pfnAheadLib_AddJobA;
PVOID pfnAheadLib_AddJobW;
PVOID pfnAheadLib_AddMonitorA;
PVOID pfnAheadLib_AddMonitorW;
PVOID pfnAheadLib_AddPortA;
PVOID pfnAheadLib_AddPortExA;
PVOID pfnAheadLib_AddPortExW;
PVOID pfnAheadLib_AddPortW;
PVOID pfnAheadLib_AddPrintProcessorA;
PVOID pfnAheadLib_AddPrintProcessorW;
PVOID pfnAheadLib_AddPrintProvidorA;
PVOID pfnAheadLib_AddPrintProvidorW;
PVOID pfnAheadLib_AddPrinterA;
PVOID pfnAheadLib_AddPrinterConnection2A;
PVOID pfnAheadLib_AddPrinterConnection2W;
PVOID pfnAheadLib_AddPrinterConnectionA;
PVOID pfnAheadLib_AddPrinterConnectionW;
PVOID pfnAheadLib_AddPrinterDriverA;
PVOID pfnAheadLib_AddPrinterDriverExA;
PVOID pfnAheadLib_AddPrinterDriverExW;
PVOID pfnAheadLib_AddPrinterDriverW;
PVOID pfnAheadLib_AddPrinterW;
PVOID pfnAheadLib_AdvancedDocumentPropertiesA;
PVOID pfnAheadLib_AdvancedDocumentPropertiesW;
PVOID pfnAheadLib_ClosePrinter;
PVOID pfnAheadLib_CloseSpoolFileHandle;
PVOID pfnAheadLib_CommitSpoolData;
PVOID pfnAheadLib_ConfigurePortA;
PVOID pfnAheadLib_ConfigurePortW;
PVOID pfnAheadLib_ConnectToPrinterDlg;
PVOID pfnAheadLib_CorePrinterDriverInstalledA;
PVOID pfnAheadLib_CorePrinterDriverInstalledW;
PVOID pfnAheadLib_CreatePrintAsyncNotifyChannel;
PVOID pfnAheadLib_CreatePrinterIC;
PVOID pfnAheadLib_DEVICECAPABILITIES;
PVOID pfnAheadLib_DeleteFormA;
PVOID pfnAheadLib_DeleteFormW;
PVOID pfnAheadLib_DeleteJobNamedProperty;
PVOID pfnAheadLib_DeleteMonitorA;
PVOID pfnAheadLib_DeleteMonitorW;
PVOID pfnAheadLib_DeletePortA;
PVOID pfnAheadLib_DeletePortW;
PVOID pfnAheadLib_DeletePrintProcessorA;
PVOID pfnAheadLib_DeletePrintProcessorW;
PVOID pfnAheadLib_DeletePrintProvidorA;
PVOID pfnAheadLib_DeletePrintProvidorW;
PVOID pfnAheadLib_DeletePrinter;
PVOID pfnAheadLib_DeletePrinterConnectionA;
PVOID pfnAheadLib_DeletePrinterConnectionW;
PVOID pfnAheadLib_DeletePrinterDataA;
PVOID pfnAheadLib_DeletePrinterDataExA;
PVOID pfnAheadLib_DeletePrinterDataExW;
PVOID pfnAheadLib_DeletePrinterDataW;
PVOID pfnAheadLib_DeletePrinterDriverA;
PVOID pfnAheadLib_DeletePrinterDriverExA;
PVOID pfnAheadLib_DeletePrinterDriverExW;
PVOID pfnAheadLib_DeletePrinterDriverPackageA;
PVOID pfnAheadLib_DeletePrinterDriverPackageW;
PVOID pfnAheadLib_DeletePrinterDriverW;
PVOID pfnAheadLib_DeletePrinterIC;
PVOID pfnAheadLib_DeletePrinterKeyA;
PVOID pfnAheadLib_DeletePrinterKeyW;
PVOID pfnAheadLib_DevQueryPrint;
PVOID pfnAheadLib_DevQueryPrintEx;
PVOID pfnAheadLib_DeviceCapabilities;
PVOID pfnAheadLib_DeviceCapabilitiesA;
PVOID pfnAheadLib_DeviceCapabilitiesW;
PVOID pfnAheadLib_DevicePropertySheets;
PVOID pfnAheadLib_DocumentPropertiesA;
PVOID pfnAheadLib_DocumentPropertiesW;
PVOID pfnAheadLib_DocumentPropertySheets;
PVOID pfnAheadLib_EXTDEVICEMODE;
PVOID pfnAheadLib_EndDocPrinter;
PVOID pfnAheadLib_EndPagePrinter;
PVOID pfnAheadLib_EnumFormsA;
PVOID pfnAheadLib_EnumFormsW;
PVOID pfnAheadLib_EnumJobNamedProperties;
PVOID pfnAheadLib_EnumJobsA;
PVOID pfnAheadLib_EnumJobsW;
PVOID pfnAheadLib_EnumMonitorsA;
PVOID pfnAheadLib_EnumMonitorsW;
PVOID pfnAheadLib_GetDefaultPrinterA;
PVOID pfnAheadLib_SetDefaultPrinterA;
PVOID pfnAheadLib_GetDefaultPrinterW;
PVOID pfnAheadLib_SetDefaultPrinterW;
PVOID pfnAheadLib_Unnamed205;
PVOID pfnAheadLib_Unnamed206;
PVOID pfnAheadLib_Unnamed207;
PVOID pfnAheadLib_Unnamed208;
PVOID pfnAheadLib_Unnamed209;
PVOID pfnAheadLib_Unnamed210;
PVOID pfnAheadLib_Unnamed211;
PVOID pfnAheadLib_Unnamed212;
PVOID pfnAheadLib_Unnamed213;
PVOID pfnAheadLib_Unnamed214;
PVOID pfnAheadLib_Unnamed215;
PVOID pfnAheadLib_Unnamed216;
PVOID pfnAheadLib_Unnamed217;
PVOID pfnAheadLib_Unnamed218;
PVOID pfnAheadLib_Unnamed219;
PVOID pfnAheadLib_Unnamed220;
PVOID pfnAheadLib_Unnamed221;
PVOID pfnAheadLib_Unnamed222;
PVOID pfnAheadLib_Unnamed223;
PVOID pfnAheadLib_Unnamed224;
PVOID pfnAheadLib_EnumPortsA;
PVOID pfnAheadLib_Unnamed226;
PVOID pfnAheadLib_Unnamed227;
PVOID pfnAheadLib_Unnamed228;
PVOID pfnAheadLib_Unnamed229;
PVOID pfnAheadLib_Unnamed230;
PVOID pfnAheadLib_Unnamed231;
PVOID pfnAheadLib_EnumPortsW;
PVOID pfnAheadLib_Unnamed233;
PVOID pfnAheadLib_Unnamed234;
PVOID pfnAheadLib_EnumPrintProcessorDatatypesA;
PVOID pfnAheadLib_EnumPrintProcessorDatatypesW;
PVOID pfnAheadLib_EnumPrintProcessorsA;
PVOID pfnAheadLib_EnumPrintProcessorsW;
PVOID pfnAheadLib_EnumPrinterDataA;
PVOID pfnAheadLib_EnumPrinterDataExA;
PVOID pfnAheadLib_EnumPrinterDataExW;
PVOID pfnAheadLib_EnumPrinterDataW;
PVOID pfnAheadLib_EnumPrinterDriversA;
PVOID pfnAheadLib_EnumPrinterDriversW;
PVOID pfnAheadLib_EnumPrinterKeyA;
PVOID pfnAheadLib_EnumPrinterKeyW;
PVOID pfnAheadLib_EnumPrintersA;
PVOID pfnAheadLib_EnumPrintersW;
PVOID pfnAheadLib_ExtDeviceMode;
PVOID pfnAheadLib_Unnamed250;
PVOID pfnAheadLib_Unnamed251;
PVOID pfnAheadLib_Unnamed252;
PVOID pfnAheadLib_Unnamed253;
PVOID pfnAheadLib_Unnamed254;
PVOID pfnAheadLib_Unnamed255;
PVOID pfnAheadLib_Unnamed256;
PVOID pfnAheadLib_Unnamed257;
PVOID pfnAheadLib_Unnamed258;
PVOID pfnAheadLib_Unnamed259;
PVOID pfnAheadLib_Unnamed260;
PVOID pfnAheadLib_Unnamed261;
PVOID pfnAheadLib_Unnamed262;
PVOID pfnAheadLib_FindClosePrinterChangeNotification;
PVOID pfnAheadLib_FindFirstPrinterChangeNotification;
PVOID pfnAheadLib_FindNextPrinterChangeNotification;
PVOID pfnAheadLib_FlushPrinter;
PVOID pfnAheadLib_FreePrintNamedPropertyArray;
PVOID pfnAheadLib_FreePrintPropertyValue;
PVOID pfnAheadLib_FreePrinterNotifyInfo;
PVOID pfnAheadLib_GetCorePrinterDriversA;
PVOID pfnAheadLib_GetCorePrinterDriversW;
PVOID pfnAheadLib_GetFormA;
PVOID pfnAheadLib_GetFormW;
PVOID pfnAheadLib_GetJobA;
PVOID pfnAheadLib_GetJobNamedPropertyValue;
PVOID pfnAheadLib_GetJobW;
PVOID pfnAheadLib_GetPrintExecutionData;
PVOID pfnAheadLib_GetPrintOutputInfo;
PVOID pfnAheadLib_GetPrintProcessorDirectoryA;
PVOID pfnAheadLib_GetPrintProcessorDirectoryW;
PVOID pfnAheadLib_GetPrinterA;
PVOID pfnAheadLib_GetPrinterDataA;
PVOID pfnAheadLib_GetPrinterDataExA;
PVOID pfnAheadLib_GetPrinterDataExW;
PVOID pfnAheadLib_GetPrinterDataW;
PVOID pfnAheadLib_GetPrinterDriver2A;
PVOID pfnAheadLib_GetPrinterDriver2W;
PVOID pfnAheadLib_GetPrinterDriverA;
PVOID pfnAheadLib_GetPrinterDriverDirectoryA;
PVOID pfnAheadLib_GetPrinterDriverDirectoryW;
PVOID pfnAheadLib_GetPrinterDriverPackagePathA;
PVOID pfnAheadLib_GetPrinterDriverPackagePathW;
PVOID pfnAheadLib_GetPrinterDriverW;
PVOID pfnAheadLib_GetPrinterW;
PVOID pfnAheadLib_GetSpoolFileHandle;
PVOID pfnAheadLib_InstallPrinterDriverFromPackageA;
PVOID pfnAheadLib_InstallPrinterDriverFromPackageW;
PVOID pfnAheadLib_IsValidDevmodeA;
PVOID pfnAheadLib_IsValidDevmodeW;
PVOID pfnAheadLib_OpenPrinter2A;
PVOID pfnAheadLib_OpenPrinter2W;
PVOID pfnAheadLib_OpenPrinterA;
PVOID pfnAheadLib_OpenPrinterW;
PVOID pfnAheadLib_PlayGdiScriptOnPrinterIC;
PVOID pfnAheadLib_PrinterMessageBoxA;
PVOID pfnAheadLib_PrinterMessageBoxW;
PVOID pfnAheadLib_PrinterProperties;
PVOID pfnAheadLib_ReadPrinter;
PVOID pfnAheadLib_RegisterForPrintAsyncNotifications;
PVOID pfnAheadLib_ReportJobProcessingProgress;
PVOID pfnAheadLib_ResetPrinterA;
PVOID pfnAheadLib_ResetPrinterW;
PVOID pfnAheadLib_ScheduleJob;
PVOID pfnAheadLib_SeekPrinter;
PVOID pfnAheadLib_SetFormA;
PVOID pfnAheadLib_SetFormW;
PVOID pfnAheadLib_SetJobA;
PVOID pfnAheadLib_SetJobNamedProperty;
PVOID pfnAheadLib_SetJobW;
PVOID pfnAheadLib_SetPortA;
PVOID pfnAheadLib_SetPortW;
PVOID pfnAheadLib_SetPrinterA;
PVOID pfnAheadLib_SetPrinterDataA;
PVOID pfnAheadLib_SetPrinterDataExA;
PVOID pfnAheadLib_SetPrinterDataExW;
PVOID pfnAheadLib_SetPrinterDataW;
PVOID pfnAheadLib_SetPrinterW;
PVOID pfnAheadLib_SplDriverUnloadComplete;
PVOID pfnAheadLib_SpoolerPrinterEvent;
PVOID pfnAheadLib_StartDocDlgA;
PVOID pfnAheadLib_StartDocPrinterA;
PVOID pfnAheadLib_StartDocPrinterW;
PVOID pfnAheadLib_StartPagePrinter;
PVOID pfnAheadLib_UnRegisterForPrintAsyncNotifications;
PVOID pfnAheadLib_UploadPrinterDriverPackageA;
PVOID pfnAheadLib_UploadPrinterDriverPackageW;
PVOID pfnAheadLib_WaitForPrinterChange;
PVOID pfnAheadLib_Unnamed338;
PVOID pfnAheadLib_Unnamed339;
PVOID pfnAheadLib_Unnamed340;
PVOID pfnAheadLib_WritePrinter;
PVOID pfnAheadLib_XcvDataW;
PVOID pfnAheadLib_Unnamed361;
PVOID pfnAheadLib_Unnamed362;
PVOID pfnAheadLib_Unnamed363;


static
HMODULE g_OldModule = NULL;

VOID WINAPI Free()
{
	if (g_OldModule)
	{
		FreeLibrary(g_OldModule);
	}
}


BOOL WINAPI Load()
{
	TCHAR tzPath[MAX_PATH];
	TCHAR tzTemp[MAX_PATH * 2];

	//
	// 这里是否从系统目录或当前目录加载原始DLL
	//
	GetSystemDirectory(tzPath, MAX_PATH);
	lstrcat(tzPath, TEXT("\\winspool.drv"));

	g_OldModule = LoadLibrary(tzPath);
	if (g_OldModule == NULL)
	{
		wsprintf(tzTemp, TEXT("无法找到模块 %s,程序无法正常运行"), tzPath);
		MessageBox(NULL, tzTemp, TEXT("AheadLib"), MB_ICONSTOP);
	}

	return (g_OldModule != NULL);

}


FARPROC WINAPI GetAddress(PCSTR pszProcName)
{
	FARPROC fpAddress;
	CHAR szProcName[64];
	TCHAR tzTemp[MAX_PATH];

	fpAddress = GetProcAddress(g_OldModule, pszProcName);
	if (fpAddress == NULL)
	{
		if (HIWORD(pszProcName) == 0)
		{
			wsprintfA(szProcName, "#%d", pszProcName);
			pszProcName = szProcName;
		}

		wsprintf(tzTemp, TEXT("无法找到函数 %hs,程序无法正常运行"), pszProcName);
		MessageBox(NULL, tzTemp, TEXT("AheadLib"), MB_ICONSTOP);
		ExitProcess(-2);
	}
	return fpAddress;
}

BOOL WINAPI Init()
{
	pfnAheadLib_Unnamed100 = GetAddress(MAKEINTRESOURCEA(100));
	pfnAheadLib_ADVANCEDSETUPDIALOG = GetAddress("ADVANCEDSETUPDIALOG");
	pfnAheadLib_AdvancedSetupDialog = GetAddress("AdvancedSetupDialog");
	pfnAheadLib_ConvertAnsiDevModeToUnicodeDevmode = GetAddress("ConvertAnsiDevModeToUnicodeDevmode");
	pfnAheadLib_ConvertUnicodeDevModeToAnsiDevmode = GetAddress("ConvertUnicodeDevModeToAnsiDevmode");
	pfnAheadLib_DEVICEMODE = GetAddress("DEVICEMODE");
	pfnAheadLib_DeviceMode = GetAddress("DeviceMode");
	pfnAheadLib_DocumentEvent = GetAddress("DocumentEvent");
	pfnAheadLib_PerfClose = GetAddress("PerfClose");
	pfnAheadLib_PerfCollect = GetAddress("PerfCollect");
	pfnAheadLib_PerfOpen = GetAddress("PerfOpen");
	pfnAheadLib_QueryColorProfile = GetAddress("QueryColorProfile");
	pfnAheadLib_QueryRemoteFonts = GetAddress("QueryRemoteFonts");
	pfnAheadLib_QuerySpoolMode = GetAddress("QuerySpoolMode");
	pfnAheadLib_SetSplwow64AppCompat = GetAddress("SetSplwow64AppCompat");
	pfnAheadLib_SpoolerDevQueryPrintW = GetAddress("SpoolerDevQueryPrintW");
	pfnAheadLib_StartDocDlgW = GetAddress("StartDocDlgW");
	pfnAheadLib_AbortPrinter = GetAddress("AbortPrinter");
	pfnAheadLib_AddFormA = GetAddress("AddFormA");
	pfnAheadLib_AddFormW = GetAddress("AddFormW");
	pfnAheadLib_AddJobA = GetAddress("AddJobA");
	pfnAheadLib_AddJobW = GetAddress("AddJobW");
	pfnAheadLib_AddMonitorA = GetAddress("AddMonitorA");
	pfnAheadLib_AddMonitorW = GetAddress("AddMonitorW");
	pfnAheadLib_AddPortA = GetAddress("AddPortA");
	pfnAheadLib_AddPortExA = GetAddress("AddPortExA");
	pfnAheadLib_AddPortExW = GetAddress("AddPortExW");
	pfnAheadLib_AddPortW = GetAddress("AddPortW");
	pfnAheadLib_AddPrintProcessorA = GetAddress("AddPrintProcessorA");
	pfnAheadLib_AddPrintProcessorW = GetAddress("AddPrintProcessorW");
	pfnAheadLib_AddPrintProvidorA = GetAddress("AddPrintProvidorA");
	pfnAheadLib_AddPrintProvidorW = GetAddress("AddPrintProvidorW");
	pfnAheadLib_AddPrinterA = GetAddress("AddPrinterA");
	pfnAheadLib_AddPrinterConnection2A = GetAddress("AddPrinterConnection2A");
	pfnAheadLib_AddPrinterConnection2W = GetAddress("AddPrinterConnection2W");
	pfnAheadLib_AddPrinterConnectionA = GetAddress("AddPrinterConnectionA");
	pfnAheadLib_AddPrinterConnectionW = GetAddress("AddPrinterConnectionW");
	pfnAheadLib_AddPrinterDriverA = GetAddress("AddPrinterDriverA");
	pfnAheadLib_AddPrinterDriverExA = GetAddress("AddPrinterDriverExA");
	pfnAheadLib_AddPrinterDriverExW = GetAddress("AddPrinterDriverExW");
	pfnAheadLib_AddPrinterDriverW = GetAddress("AddPrinterDriverW");
	pfnAheadLib_AddPrinterW = GetAddress("AddPrinterW");
	pfnAheadLib_AdvancedDocumentPropertiesA = GetAddress("AdvancedDocumentPropertiesA");
	pfnAheadLib_AdvancedDocumentPropertiesW = GetAddress("AdvancedDocumentPropertiesW");
	pfnAheadLib_ClosePrinter = GetAddress("ClosePrinter");
	pfnAheadLib_CloseSpoolFileHandle = GetAddress("CloseSpoolFileHandle");
	pfnAheadLib_CommitSpoolData = GetAddress("CommitSpoolData");
	pfnAheadLib_ConfigurePortA = GetAddress("ConfigurePortA");
	pfnAheadLib_ConfigurePortW = GetAddress("ConfigurePortW");
	pfnAheadLib_ConnectToPrinterDlg = GetAddress("ConnectToPrinterDlg");
	pfnAheadLib_CorePrinterDriverInstalledA = GetAddress("CorePrinterDriverInstalledA");
	pfnAheadLib_CorePrinterDriverInstalledW = GetAddress("CorePrinterDriverInstalledW");
	pfnAheadLib_CreatePrintAsyncNotifyChannel = GetAddress("CreatePrintAsyncNotifyChannel");
	pfnAheadLib_CreatePrinterIC = GetAddress("CreatePrinterIC");
	pfnAheadLib_DEVICECAPABILITIES = GetAddress("DEVICECAPABILITIES");
	pfnAheadLib_DeleteFormA = GetAddress("DeleteFormA");
	pfnAheadLib_DeleteFormW = GetAddress("DeleteFormW");
	pfnAheadLib_DeleteJobNamedProperty = GetAddress("DeleteJobNamedProperty");
	pfnAheadLib_DeleteMonitorA = GetAddress("DeleteMonitorA");
	pfnAheadLib_DeleteMonitorW = GetAddress("DeleteMonitorW");
	pfnAheadLib_DeletePortA = GetAddress("DeletePortA");
	pfnAheadLib_DeletePortW = GetAddress("DeletePortW");
	pfnAheadLib_DeletePrintProcessorA = GetAddress("DeletePrintProcessorA");
	pfnAheadLib_DeletePrintProcessorW = GetAddress("DeletePrintProcessorW");
	pfnAheadLib_DeletePrintProvidorA = GetAddress("DeletePrintProvidorA");
	pfnAheadLib_DeletePrintProvidorW = GetAddress("DeletePrintProvidorW");
	pfnAheadLib_DeletePrinter = GetAddress("DeletePrinter");
	pfnAheadLib_DeletePrinterConnectionA = GetAddress("DeletePrinterConnectionA");
	pfnAheadLib_DeletePrinterConnectionW = GetAddress("DeletePrinterConnectionW");
	pfnAheadLib_DeletePrinterDataA = GetAddress("DeletePrinterDataA");
	pfnAheadLib_DeletePrinterDataExA = GetAddress("DeletePrinterDataExA");
	pfnAheadLib_DeletePrinterDataExW = GetAddress("DeletePrinterDataExW");
	pfnAheadLib_DeletePrinterDataW = GetAddress("DeletePrinterDataW");
	pfnAheadLib_DeletePrinterDriverA = GetAddress("DeletePrinterDriverA");
	pfnAheadLib_DeletePrinterDriverExA = GetAddress("DeletePrinterDriverExA");
	pfnAheadLib_DeletePrinterDriverExW = GetAddress("DeletePrinterDriverExW");
	pfnAheadLib_DeletePrinterDriverPackageA = GetAddress("DeletePrinterDriverPackageA");
	pfnAheadLib_DeletePrinterDriverPackageW = GetAddress("DeletePrinterDriverPackageW");
	pfnAheadLib_DeletePrinterDriverW = GetAddress("DeletePrinterDriverW");
	pfnAheadLib_DeletePrinterIC = GetAddress("DeletePrinterIC");
	pfnAheadLib_DeletePrinterKeyA = GetAddress("DeletePrinterKeyA");
	pfnAheadLib_DeletePrinterKeyW = GetAddress("DeletePrinterKeyW");
	pfnAheadLib_DevQueryPrint = GetAddress("DevQueryPrint");
	pfnAheadLib_DevQueryPrintEx = GetAddress("DevQueryPrintEx");
	pfnAheadLib_DeviceCapabilities = GetAddress("DeviceCapabilities");
	pfnAheadLib_DeviceCapabilitiesA = GetAddress("DeviceCapabilitiesA");
	pfnAheadLib_DeviceCapabilitiesW = GetAddress("DeviceCapabilitiesW");
	pfnAheadLib_DevicePropertySheets = GetAddress("DevicePropertySheets");
	pfnAheadLib_DocumentPropertiesA = GetAddress("DocumentPropertiesA");
	pfnAheadLib_DocumentPropertiesW = GetAddress("DocumentPropertiesW");
	pfnAheadLib_DocumentPropertySheets = GetAddress("DocumentPropertySheets");
	pfnAheadLib_EXTDEVICEMODE = GetAddress("EXTDEVICEMODE");
	pfnAheadLib_EndDocPrinter = GetAddress("EndDocPrinter");
	pfnAheadLib_EndPagePrinter = GetAddress("EndPagePrinter");
	pfnAheadLib_EnumFormsA = GetAddress("EnumFormsA");
	pfnAheadLib_EnumFormsW = GetAddress("EnumFormsW");
	pfnAheadLib_EnumJobNamedProperties = GetAddress("EnumJobNamedProperties");
	pfnAheadLib_EnumJobsA = GetAddress("EnumJobsA");
	pfnAheadLib_EnumJobsW = GetAddress("EnumJobsW");
	pfnAheadLib_EnumMonitorsA = GetAddress("EnumMonitorsA");
	pfnAheadLib_EnumMonitorsW = GetAddress("EnumMonitorsW");
	pfnAheadLib_GetDefaultPrinterA = GetAddress("GetDefaultPrinterA");
	pfnAheadLib_SetDefaultPrinterA = GetAddress("SetDefaultPrinterA");
	pfnAheadLib_GetDefaultPrinterW = GetAddress("GetDefaultPrinterW");
	pfnAheadLib_SetDefaultPrinterW = GetAddress("SetDefaultPrinterW");
	pfnAheadLib_Unnamed205 = GetAddress(MAKEINTRESOURCEA(205));
	pfnAheadLib_Unnamed206 = GetAddress(MAKEINTRESOURCEA(206));
	pfnAheadLib_Unnamed207 = GetAddress(MAKEINTRESOURCEA(207));
	pfnAheadLib_Unnamed208 = GetAddress(MAKEINTRESOURCEA(208));
	pfnAheadLib_Unnamed209 = GetAddress(MAKEINTRESOURCEA(209));
	pfnAheadLib_Unnamed210 = GetAddress(MAKEINTRESOURCEA(210));
	pfnAheadLib_Unnamed211 = GetAddress(MAKEINTRESOURCEA(211));
	pfnAheadLib_Unnamed212 = GetAddress(MAKEINTRESOURCEA(212));
	pfnAheadLib_Unnamed213 = GetAddress(MAKEINTRESOURCEA(213));
	pfnAheadLib_Unnamed214 = GetAddress(MAKEINTRESOURCEA(214));
	pfnAheadLib_Unnamed215 = GetAddress(MAKEINTRESOURCEA(215));
	pfnAheadLib_Unnamed216 = GetAddress(MAKEINTRESOURCEA(216));
	pfnAheadLib_Unnamed217 = GetAddress(MAKEINTRESOURCEA(217));
	pfnAheadLib_Unnamed218 = GetAddress(MAKEINTRESOURCEA(218));
	pfnAheadLib_Unnamed219 = GetAddress(MAKEINTRESOURCEA(219));
	pfnAheadLib_Unnamed220 = GetAddress(MAKEINTRESOURCEA(220));
	pfnAheadLib_Unnamed221 = GetAddress(MAKEINTRESOURCEA(221));
	pfnAheadLib_Unnamed222 = GetAddress(MAKEINTRESOURCEA(222));
	pfnAheadLib_Unnamed223 = GetAddress(MAKEINTRESOURCEA(223));
	pfnAheadLib_Unnamed224 = GetAddress(MAKEINTRESOURCEA(224));
	pfnAheadLib_EnumPortsA = GetAddress("EnumPortsA");
	pfnAheadLib_Unnamed226 = GetAddress(MAKEINTRESOURCEA(226));
	pfnAheadLib_Unnamed227 = GetAddress(MAKEINTRESOURCEA(227));
	pfnAheadLib_Unnamed228 = GetAddress(MAKEINTRESOURCEA(228));
	pfnAheadLib_Unnamed229 = GetAddress(MAKEINTRESOURCEA(229));
	pfnAheadLib_Unnamed230 = GetAddress(MAKEINTRESOURCEA(230));
	pfnAheadLib_Unnamed231 = GetAddress(MAKEINTRESOURCEA(231));
	pfnAheadLib_EnumPortsW = GetAddress("EnumPortsW");
	pfnAheadLib_Unnamed233 = GetAddress(MAKEINTRESOURCEA(233));
	pfnAheadLib_Unnamed234 = GetAddress(MAKEINTRESOURCEA(234));
	pfnAheadLib_EnumPrintProcessorDatatypesA = GetAddress("EnumPrintProcessorDatatypesA");
	pfnAheadLib_EnumPrintProcessorDatatypesW = GetAddress("EnumPrintProcessorDatatypesW");
	pfnAheadLib_EnumPrintProcessorsA = GetAddress("EnumPrintProcessorsA");
	pfnAheadLib_EnumPrintProcessorsW = GetAddress("EnumPrintProcessorsW");
	pfnAheadLib_EnumPrinterDataA = GetAddress("EnumPrinterDataA");
	pfnAheadLib_EnumPrinterDataExA = GetAddress("EnumPrinterDataExA");
	pfnAheadLib_EnumPrinterDataExW = GetAddress("EnumPrinterDataExW");
	pfnAheadLib_EnumPrinterDataW = GetAddress("EnumPrinterDataW");
	pfnAheadLib_EnumPrinterDriversA = GetAddress("EnumPrinterDriversA");
	pfnAheadLib_EnumPrinterDriversW = GetAddress("EnumPrinterDriversW");
	pfnAheadLib_EnumPrinterKeyA = GetAddress("EnumPrinterKeyA");
	pfnAheadLib_EnumPrinterKeyW = GetAddress("EnumPrinterKeyW");
	pfnAheadLib_EnumPrintersA = GetAddress("EnumPrintersA");
	pfnAheadLib_EnumPrintersW = GetAddress("EnumPrintersW");
	pfnAheadLib_ExtDeviceMode = GetAddress("ExtDeviceMode");
	pfnAheadLib_Unnamed250 = GetAddress(MAKEINTRESOURCEA(250));
	pfnAheadLib_Unnamed251 = GetAddress(MAKEINTRESOURCEA(251));
	pfnAheadLib_Unnamed252 = GetAddress(MAKEINTRESOURCEA(252));
	pfnAheadLib_Unnamed253 = GetAddress(MAKEINTRESOURCEA(253));
	pfnAheadLib_Unnamed254 = GetAddress(MAKEINTRESOURCEA(254));
	pfnAheadLib_Unnamed255 = GetAddress(MAKEINTRESOURCEA(255));
	pfnAheadLib_Unnamed256 = GetAddress(MAKEINTRESOURCEA(256));
	pfnAheadLib_Unnamed257 = GetAddress(MAKEINTRESOURCEA(257));
	pfnAheadLib_Unnamed258 = GetAddress(MAKEINTRESOURCEA(258));
	pfnAheadLib_Unnamed259 = GetAddress(MAKEINTRESOURCEA(259));
	pfnAheadLib_Unnamed260 = GetAddress(MAKEINTRESOURCEA(260));
	pfnAheadLib_Unnamed261 = GetAddress(MAKEINTRESOURCEA(261));
	pfnAheadLib_Unnamed262 = GetAddress(MAKEINTRESOURCEA(262));
	pfnAheadLib_FindClosePrinterChangeNotification = GetAddress("FindClosePrinterChangeNotification");
	pfnAheadLib_FindFirstPrinterChangeNotification = GetAddress("FindFirstPrinterChangeNotification");
	pfnAheadLib_FindNextPrinterChangeNotification = GetAddress("FindNextPrinterChangeNotification");
	pfnAheadLib_FlushPrinter = GetAddress("FlushPrinter");
	pfnAheadLib_FreePrintNamedPropertyArray = GetAddress("FreePrintNamedPropertyArray");
	pfnAheadLib_FreePrintPropertyValue = GetAddress("FreePrintPropertyValue");
	pfnAheadLib_FreePrinterNotifyInfo = GetAddress("FreePrinterNotifyInfo");
	pfnAheadLib_GetCorePrinterDriversA = GetAddress("GetCorePrinterDriversA");
	pfnAheadLib_GetCorePrinterDriversW = GetAddress("GetCorePrinterDriversW");
	pfnAheadLib_GetFormA = GetAddress("GetFormA");
	pfnAheadLib_GetFormW = GetAddress("GetFormW");
	pfnAheadLib_GetJobA = GetAddress("GetJobA");
	pfnAheadLib_GetJobNamedPropertyValue = GetAddress("GetJobNamedPropertyValue");
	pfnAheadLib_GetJobW = GetAddress("GetJobW");
	pfnAheadLib_GetPrintExecutionData = GetAddress("GetPrintExecutionData");
	pfnAheadLib_GetPrintOutputInfo = GetAddress("GetPrintOutputInfo");
	pfnAheadLib_GetPrintProcessorDirectoryA = GetAddress("GetPrintProcessorDirectoryA");
	pfnAheadLib_GetPrintProcessorDirectoryW = GetAddress("GetPrintProcessorDirectoryW");
	pfnAheadLib_GetPrinterA = GetAddress("GetPrinterA");
	pfnAheadLib_GetPrinterDataA = GetAddress("GetPrinterDataA");
	pfnAheadLib_GetPrinterDataExA = GetAddress("GetPrinterDataExA");
	pfnAheadLib_GetPrinterDataExW = GetAddress("GetPrinterDataExW");
	pfnAheadLib_GetPrinterDataW = GetAddress("GetPrinterDataW");
	pfnAheadLib_GetPrinterDriver2A = GetAddress("GetPrinterDriver2A");
	pfnAheadLib_GetPrinterDriver2W = GetAddress("GetPrinterDriver2W");
	pfnAheadLib_GetPrinterDriverA = GetAddress("GetPrinterDriverA");
	pfnAheadLib_GetPrinterDriverDirectoryA = GetAddress("GetPrinterDriverDirectoryA");
	pfnAheadLib_GetPrinterDriverDirectoryW = GetAddress("GetPrinterDriverDirectoryW");
	pfnAheadLib_GetPrinterDriverPackagePathA = GetAddress("GetPrinterDriverPackagePathA");
	pfnAheadLib_GetPrinterDriverPackagePathW = GetAddress("GetPrinterDriverPackagePathW");
	pfnAheadLib_GetPrinterDriverW = GetAddress("GetPrinterDriverW");
	pfnAheadLib_GetPrinterW = GetAddress("GetPrinterW");
	pfnAheadLib_GetSpoolFileHandle = GetAddress("GetSpoolFileHandle");
	pfnAheadLib_InstallPrinterDriverFromPackageA = GetAddress("InstallPrinterDriverFromPackageA");
	pfnAheadLib_InstallPrinterDriverFromPackageW = GetAddress("InstallPrinterDriverFromPackageW");
	pfnAheadLib_IsValidDevmodeA = GetAddress("IsValidDevmodeA");
	pfnAheadLib_IsValidDevmodeW = GetAddress("IsValidDevmodeW");
	pfnAheadLib_OpenPrinter2A = GetAddress("OpenPrinter2A");
	pfnAheadLib_OpenPrinter2W = GetAddress("OpenPrinter2W");
	pfnAheadLib_OpenPrinterA = GetAddress("OpenPrinterA");
	pfnAheadLib_OpenPrinterW = GetAddress("OpenPrinterW");
	pfnAheadLib_PlayGdiScriptOnPrinterIC = GetAddress("PlayGdiScriptOnPrinterIC");
	pfnAheadLib_PrinterMessageBoxA = GetAddress("PrinterMessageBoxA");
	pfnAheadLib_PrinterMessageBoxW = GetAddress("PrinterMessageBoxW");
	pfnAheadLib_PrinterProperties = GetAddress("PrinterProperties");
	pfnAheadLib_ReadPrinter = GetAddress("ReadPrinter");
	pfnAheadLib_RegisterForPrintAsyncNotifications = GetAddress("RegisterForPrintAsyncNotifications");
	pfnAheadLib_ReportJobProcessingProgress = GetAddress("ReportJobProcessingProgress");
	pfnAheadLib_ResetPrinterA = GetAddress("ResetPrinterA");
	pfnAheadLib_ResetPrinterW = GetAddress("ResetPrinterW");
	pfnAheadLib_ScheduleJob = GetAddress("ScheduleJob");
	pfnAheadLib_SeekPrinter = GetAddress("SeekPrinter");
	pfnAheadLib_SetFormA = GetAddress("SetFormA");
	pfnAheadLib_SetFormW = GetAddress("SetFormW");
	pfnAheadLib_SetJobA = GetAddress("SetJobA");
	pfnAheadLib_SetJobNamedProperty = GetAddress("SetJobNamedProperty");
	pfnAheadLib_SetJobW = GetAddress("SetJobW");
	pfnAheadLib_SetPortA = GetAddress("SetPortA");
	pfnAheadLib_SetPortW = GetAddress("SetPortW");
	pfnAheadLib_SetPrinterA = GetAddress("SetPrinterA");
	pfnAheadLib_SetPrinterDataA = GetAddress("SetPrinterDataA");
	pfnAheadLib_SetPrinterDataExA = GetAddress("SetPrinterDataExA");
	pfnAheadLib_SetPrinterDataExW = GetAddress("SetPrinterDataExW");
	pfnAheadLib_SetPrinterDataW = GetAddress("SetPrinterDataW");
	pfnAheadLib_SetPrinterW = GetAddress("SetPrinterW");
	pfnAheadLib_SplDriverUnloadComplete = GetAddress("SplDriverUnloadComplete");
	pfnAheadLib_SpoolerPrinterEvent = GetAddress("SpoolerPrinterEvent");
	pfnAheadLib_StartDocDlgA = GetAddress("StartDocDlgA");
	pfnAheadLib_StartDocPrinterA = GetAddress("StartDocPrinterA");
	pfnAheadLib_StartDocPrinterW = GetAddress("StartDocPrinterW");
	pfnAheadLib_StartPagePrinter = GetAddress("StartPagePrinter");
	pfnAheadLib_UnRegisterForPrintAsyncNotifications = GetAddress("UnRegisterForPrintAsyncNotifications");
	pfnAheadLib_UploadPrinterDriverPackageA = GetAddress("UploadPrinterDriverPackageA");
	pfnAheadLib_UploadPrinterDriverPackageW = GetAddress("UploadPrinterDriverPackageW");
	pfnAheadLib_WaitForPrinterChange = GetAddress("WaitForPrinterChange");
	pfnAheadLib_Unnamed338 = GetAddress(MAKEINTRESOURCEA(338));
	pfnAheadLib_Unnamed339 = GetAddress(MAKEINTRESOURCEA(339));
	pfnAheadLib_Unnamed340 = GetAddress(MAKEINTRESOURCEA(340));
	pfnAheadLib_WritePrinter = GetAddress("WritePrinter");
	pfnAheadLib_XcvDataW = GetAddress("XcvDataW");
	pfnAheadLib_Unnamed361 = GetAddress(MAKEINTRESOURCEA(361));
	pfnAheadLib_Unnamed362 = GetAddress(MAKEINTRESOURCEA(362));
	pfnAheadLib_Unnamed363 = GetAddress(MAKEINTRESOURCEA(363));
	return TRUE;
}	

void SetHwBreakPoint(HANDLE hThread) {
	CONTEXT ctx;
	ctx.ContextFlags = CONTEXT_ALL;
	GetThreadContext(hThread, &ctx);
	ctx.Dr0 = 0x004010F5;
	ctx.Dr7 = 0x001;
	SetThreadContext(hThread, &ctx);
}


DWORD WINAPI ThreadProc(LPVOID mainThreadParameterid)
{

	HANDLE h = OpenThread(THREAD_ALL_ACCESS, TRUE, (DWORD)mainThreadParameterid);
	if (h)
	{
		SuspendThread(h);
		SetHwBreakPoint(h);
		ResumeThread(h);
	}

	return 0;
}

DWORD NTAPI ExceptionHandler(EXCEPTION_POINTERS* Exceptioninfo) {
	if ((DWORD)Exceptioninfo->ExceptionRecord->ExceptionAddress == 0x004010F5)
	{
		Exceptioninfo->ContextRecord->Eip += 6;
		return EXCEPTION_CONTINUE_EXECUTION;
	}
	return EXCEPTION_CONTINUE_SEARCH;
}




BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, PVOID pvReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hModule);

		if (Load() && Init())
		{
			TCHAR szAppName[MAX_PATH] = TEXT("test.exe");
			TCHAR szCurName[MAX_PATH];
			GetModuleFileName(NULL, szCurName, MAX_PATH);
			PathStripPath(szCurName);

			//是否判断宿主进程名
			if (StrCmpI(szAppName, szAppName) == 0)
			{
				//注册aveh异常 用来硬件中断
				AddVectoredExceptionHandler(1, (PVECTORED_EXCEPTION_HANDLER)ExceptionHandler);
				int Threadid = GetCurrentThreadId();
				//启动补丁线程或者其他操作
				HANDLE hThread = CreateThread(NULL, NULL, ThreadProc, (LPVOID)Threadid, NULL, NULL);
				if (hThread)
				{
					CloseHandle(hThread);
				}

			
			}
		}
	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{
		Free();
	}

	return TRUE;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed100(void)
{
	__asm jmp pfnAheadLib_Unnamed100;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_ADVANCEDSETUPDIALOG(void)
{
	__asm jmp pfnAheadLib_ADVANCEDSETUPDIALOG;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AdvancedSetupDialog(void)
{
	__asm jmp pfnAheadLib_AdvancedSetupDialog;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_ConvertAnsiDevModeToUnicodeDevmode(void)
{
	__asm jmp pfnAheadLib_ConvertAnsiDevModeToUnicodeDevmode;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_ConvertUnicodeDevModeToAnsiDevmode(void)
{
	__asm jmp pfnAheadLib_ConvertUnicodeDevModeToAnsiDevmode;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DEVICEMODE(void)
{
	__asm jmp pfnAheadLib_DEVICEMODE;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeviceMode(void)
{
	__asm jmp pfnAheadLib_DeviceMode;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DocumentEvent(void)
{
	__asm jmp pfnAheadLib_DocumentEvent;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_PerfClose(void)
{
	__asm jmp pfnAheadLib_PerfClose;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_PerfCollect(void)
{
	__asm jmp pfnAheadLib_PerfCollect;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_PerfOpen(void)
{
	__asm jmp pfnAheadLib_PerfOpen;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_QueryColorProfile(void)
{
	__asm jmp pfnAheadLib_QueryColorProfile;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_QueryRemoteFonts(void)
{
	__asm jmp pfnAheadLib_QueryRemoteFonts;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_QuerySpoolMode(void)
{
	__asm jmp pfnAheadLib_QuerySpoolMode;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetSplwow64AppCompat(void)
{
	__asm jmp pfnAheadLib_SetSplwow64AppCompat;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SpoolerDevQueryPrintW(void)
{
	__asm jmp pfnAheadLib_SpoolerDevQueryPrintW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_StartDocDlgW(void)
{
	__asm jmp pfnAheadLib_StartDocDlgW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AbortPrinter(void)
{
	__asm jmp pfnAheadLib_AbortPrinter;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddFormA(void)
{
	__asm jmp pfnAheadLib_AddFormA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddFormW(void)
{
	__asm jmp pfnAheadLib_AddFormW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddJobA(void)
{
	__asm jmp pfnAheadLib_AddJobA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddJobW(void)
{
	__asm jmp pfnAheadLib_AddJobW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddMonitorA(void)
{
	__asm jmp pfnAheadLib_AddMonitorA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddMonitorW(void)
{
	__asm jmp pfnAheadLib_AddMonitorW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPortA(void)
{
	__asm jmp pfnAheadLib_AddPortA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPortExA(void)
{
	__asm jmp pfnAheadLib_AddPortExA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPortExW(void)
{
	__asm jmp pfnAheadLib_AddPortExW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPortW(void)
{
	__asm jmp pfnAheadLib_AddPortW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPrintProcessorA(void)
{
	__asm jmp pfnAheadLib_AddPrintProcessorA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPrintProcessorW(void)
{
	__asm jmp pfnAheadLib_AddPrintProcessorW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPrintProvidorA(void)
{
	__asm jmp pfnAheadLib_AddPrintProvidorA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPrintProvidorW(void)
{
	__asm jmp pfnAheadLib_AddPrintProvidorW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPrinterA(void)
{
	__asm jmp pfnAheadLib_AddPrinterA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPrinterConnection2A(void)
{
	__asm jmp pfnAheadLib_AddPrinterConnection2A;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPrinterConnection2W(void)
{
	__asm jmp pfnAheadLib_AddPrinterConnection2W;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPrinterConnectionA(void)
{
	__asm jmp pfnAheadLib_AddPrinterConnectionA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPrinterConnectionW(void)
{
	__asm jmp pfnAheadLib_AddPrinterConnectionW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPrinterDriverA(void)
{
	__asm jmp pfnAheadLib_AddPrinterDriverA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPrinterDriverExA(void)
{
	__asm jmp pfnAheadLib_AddPrinterDriverExA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPrinterDriverExW(void)
{
	__asm jmp pfnAheadLib_AddPrinterDriverExW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPrinterDriverW(void)
{
	__asm jmp pfnAheadLib_AddPrinterDriverW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AddPrinterW(void)
{
	__asm jmp pfnAheadLib_AddPrinterW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AdvancedDocumentPropertiesA(void)
{
	__asm jmp pfnAheadLib_AdvancedDocumentPropertiesA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_AdvancedDocumentPropertiesW(void)
{
	__asm jmp pfnAheadLib_AdvancedDocumentPropertiesW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_ClosePrinter(void)
{
	__asm jmp pfnAheadLib_ClosePrinter;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_CloseSpoolFileHandle(void)
{
	__asm jmp pfnAheadLib_CloseSpoolFileHandle;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_CommitSpoolData(void)
{
	__asm jmp pfnAheadLib_CommitSpoolData;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_ConfigurePortA(void)
{
	__asm jmp pfnAheadLib_ConfigurePortA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_ConfigurePortW(void)
{
	__asm jmp pfnAheadLib_ConfigurePortW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_ConnectToPrinterDlg(void)
{
	__asm jmp pfnAheadLib_ConnectToPrinterDlg;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_CorePrinterDriverInstalledA(void)
{
	__asm jmp pfnAheadLib_CorePrinterDriverInstalledA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_CorePrinterDriverInstalledW(void)
{
	__asm jmp pfnAheadLib_CorePrinterDriverInstalledW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_CreatePrintAsyncNotifyChannel(void)
{
	__asm jmp pfnAheadLib_CreatePrintAsyncNotifyChannel;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_CreatePrinterIC(void)
{
	__asm jmp pfnAheadLib_CreatePrinterIC;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DEVICECAPABILITIES(void)
{
	__asm jmp pfnAheadLib_DEVICECAPABILITIES;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeleteFormA(void)
{
	__asm jmp pfnAheadLib_DeleteFormA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeleteFormW(void)
{
	__asm jmp pfnAheadLib_DeleteFormW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeleteJobNamedProperty(void)
{
	__asm jmp pfnAheadLib_DeleteJobNamedProperty;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeleteMonitorA(void)
{
	__asm jmp pfnAheadLib_DeleteMonitorA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeleteMonitorW(void)
{
	__asm jmp pfnAheadLib_DeleteMonitorW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePortA(void)
{
	__asm jmp pfnAheadLib_DeletePortA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePortW(void)
{
	__asm jmp pfnAheadLib_DeletePortW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrintProcessorA(void)
{
	__asm jmp pfnAheadLib_DeletePrintProcessorA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrintProcessorW(void)
{
	__asm jmp pfnAheadLib_DeletePrintProcessorW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrintProvidorA(void)
{
	__asm jmp pfnAheadLib_DeletePrintProvidorA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrintProvidorW(void)
{
	__asm jmp pfnAheadLib_DeletePrintProvidorW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinter(void)
{
	__asm jmp pfnAheadLib_DeletePrinter;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinterConnectionA(void)
{
	__asm jmp pfnAheadLib_DeletePrinterConnectionA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinterConnectionW(void)
{
	__asm jmp pfnAheadLib_DeletePrinterConnectionW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinterDataA(void)
{
	__asm jmp pfnAheadLib_DeletePrinterDataA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinterDataExA(void)
{
	__asm jmp pfnAheadLib_DeletePrinterDataExA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinterDataExW(void)
{
	__asm jmp pfnAheadLib_DeletePrinterDataExW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinterDataW(void)
{
	__asm jmp pfnAheadLib_DeletePrinterDataW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinterDriverA(void)
{
	__asm jmp pfnAheadLib_DeletePrinterDriverA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinterDriverExA(void)
{
	__asm jmp pfnAheadLib_DeletePrinterDriverExA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinterDriverExW(void)
{
	__asm jmp pfnAheadLib_DeletePrinterDriverExW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinterDriverPackageA(void)
{
	__asm jmp pfnAheadLib_DeletePrinterDriverPackageA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinterDriverPackageW(void)
{
	__asm jmp pfnAheadLib_DeletePrinterDriverPackageW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinterDriverW(void)
{
	__asm jmp pfnAheadLib_DeletePrinterDriverW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinterIC(void)
{
	__asm jmp pfnAheadLib_DeletePrinterIC;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinterKeyA(void)
{
	__asm jmp pfnAheadLib_DeletePrinterKeyA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeletePrinterKeyW(void)
{
	__asm jmp pfnAheadLib_DeletePrinterKeyW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DevQueryPrint(void)
{
	__asm jmp pfnAheadLib_DevQueryPrint;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DevQueryPrintEx(void)
{
	__asm jmp pfnAheadLib_DevQueryPrintEx;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeviceCapabilities(void)
{
	__asm jmp pfnAheadLib_DeviceCapabilities;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeviceCapabilitiesA(void)
{
	__asm jmp pfnAheadLib_DeviceCapabilitiesA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DeviceCapabilitiesW(void)
{
	__asm jmp pfnAheadLib_DeviceCapabilitiesW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DevicePropertySheets(void)
{
	__asm jmp pfnAheadLib_DevicePropertySheets;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DocumentPropertiesA(void)
{
	__asm jmp pfnAheadLib_DocumentPropertiesA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DocumentPropertiesW(void)
{
	__asm jmp pfnAheadLib_DocumentPropertiesW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_DocumentPropertySheets(void)
{
	__asm jmp pfnAheadLib_DocumentPropertySheets;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EXTDEVICEMODE(void)
{
	__asm jmp pfnAheadLib_EXTDEVICEMODE;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EndDocPrinter(void)
{
	__asm jmp pfnAheadLib_EndDocPrinter;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EndPagePrinter(void)
{
	__asm jmp pfnAheadLib_EndPagePrinter;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumFormsA(void)
{
	__asm jmp pfnAheadLib_EnumFormsA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumFormsW(void)
{
	__asm jmp pfnAheadLib_EnumFormsW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumJobNamedProperties(void)
{
	__asm jmp pfnAheadLib_EnumJobNamedProperties;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumJobsA(void)
{
	__asm jmp pfnAheadLib_EnumJobsA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumJobsW(void)
{
	__asm jmp pfnAheadLib_EnumJobsW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumMonitorsA(void)
{
	__asm jmp pfnAheadLib_EnumMonitorsA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumMonitorsW(void)
{
	__asm jmp pfnAheadLib_EnumMonitorsW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetDefaultPrinterA(void)
{
	__asm jmp pfnAheadLib_GetDefaultPrinterA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetDefaultPrinterA(void)
{
	__asm jmp pfnAheadLib_SetDefaultPrinterA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetDefaultPrinterW(void)
{
	__asm jmp pfnAheadLib_GetDefaultPrinterW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetDefaultPrinterW(void)
{
	__asm jmp pfnAheadLib_SetDefaultPrinterW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed205(void)
{
	__asm jmp pfnAheadLib_Unnamed205;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed206(void)
{
	__asm jmp pfnAheadLib_Unnamed206;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed207(void)
{
	__asm jmp pfnAheadLib_Unnamed207;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed208(void)
{
	__asm jmp pfnAheadLib_Unnamed208;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed209(void)
{
	__asm jmp pfnAheadLib_Unnamed209;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed210(void)
{
	__asm jmp pfnAheadLib_Unnamed210;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed211(void)
{
	__asm jmp pfnAheadLib_Unnamed211;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed212(void)
{
	__asm jmp pfnAheadLib_Unnamed212;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed213(void)
{
	__asm jmp pfnAheadLib_Unnamed213;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed214(void)
{
	__asm jmp pfnAheadLib_Unnamed214;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed215(void)
{
	__asm jmp pfnAheadLib_Unnamed215;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed216(void)
{
	__asm jmp pfnAheadLib_Unnamed216;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed217(void)
{
	__asm jmp pfnAheadLib_Unnamed217;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed218(void)
{
	__asm jmp pfnAheadLib_Unnamed218;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed219(void)
{
	__asm jmp pfnAheadLib_Unnamed219;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed220(void)
{
	__asm jmp pfnAheadLib_Unnamed220;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed221(void)
{
	__asm jmp pfnAheadLib_Unnamed221;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed222(void)
{
	__asm jmp pfnAheadLib_Unnamed222;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed223(void)
{
	__asm jmp pfnAheadLib_Unnamed223;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed224(void)
{
	__asm jmp pfnAheadLib_Unnamed224;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPortsA(void)
{
	__asm jmp pfnAheadLib_EnumPortsA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed226(void)
{
	__asm jmp pfnAheadLib_Unnamed226;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed227(void)
{
	__asm jmp pfnAheadLib_Unnamed227;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed228(void)
{
	__asm jmp pfnAheadLib_Unnamed228;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed229(void)
{
	__asm jmp pfnAheadLib_Unnamed229;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed230(void)
{
	__asm jmp pfnAheadLib_Unnamed230;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed231(void)
{
	__asm jmp pfnAheadLib_Unnamed231;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPortsW(void)
{
	__asm jmp pfnAheadLib_EnumPortsW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed233(void)
{
	__asm jmp pfnAheadLib_Unnamed233;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed234(void)
{
	__asm jmp pfnAheadLib_Unnamed234;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPrintProcessorDatatypesA(void)
{
	__asm jmp pfnAheadLib_EnumPrintProcessorDatatypesA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPrintProcessorDatatypesW(void)
{
	__asm jmp pfnAheadLib_EnumPrintProcessorDatatypesW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPrintProcessorsA(void)
{
	__asm jmp pfnAheadLib_EnumPrintProcessorsA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPrintProcessorsW(void)
{
	__asm jmp pfnAheadLib_EnumPrintProcessorsW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPrinterDataA(void)
{
	__asm jmp pfnAheadLib_EnumPrinterDataA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPrinterDataExA(void)
{
	__asm jmp pfnAheadLib_EnumPrinterDataExA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPrinterDataExW(void)
{
	__asm jmp pfnAheadLib_EnumPrinterDataExW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPrinterDataW(void)
{
	__asm jmp pfnAheadLib_EnumPrinterDataW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPrinterDriversA(void)
{
	__asm jmp pfnAheadLib_EnumPrinterDriversA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPrinterDriversW(void)
{
	__asm jmp pfnAheadLib_EnumPrinterDriversW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPrinterKeyA(void)
{
	__asm jmp pfnAheadLib_EnumPrinterKeyA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPrinterKeyW(void)
{
	__asm jmp pfnAheadLib_EnumPrinterKeyW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPrintersA(void)
{
	__asm jmp pfnAheadLib_EnumPrintersA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_EnumPrintersW(void)
{
	__asm jmp pfnAheadLib_EnumPrintersW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_ExtDeviceMode(void)
{
	__asm jmp pfnAheadLib_ExtDeviceMode;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed250(void)
{
	__asm jmp pfnAheadLib_Unnamed250;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed251(void)
{
	__asm jmp pfnAheadLib_Unnamed251;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed252(void)
{
	__asm jmp pfnAheadLib_Unnamed252;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed253(void)
{
	__asm jmp pfnAheadLib_Unnamed253;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed254(void)
{
	__asm jmp pfnAheadLib_Unnamed254;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed255(void)
{
	__asm jmp pfnAheadLib_Unnamed255;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed256(void)
{
	__asm jmp pfnAheadLib_Unnamed256;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed257(void)
{
	__asm jmp pfnAheadLib_Unnamed257;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed258(void)
{
	__asm jmp pfnAheadLib_Unnamed258;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed259(void)
{
	__asm jmp pfnAheadLib_Unnamed259;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed260(void)
{
	__asm jmp pfnAheadLib_Unnamed260;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed261(void)
{
	__asm jmp pfnAheadLib_Unnamed261;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed262(void)
{
	__asm jmp pfnAheadLib_Unnamed262;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_FindClosePrinterChangeNotification(void)
{
	__asm jmp pfnAheadLib_FindClosePrinterChangeNotification;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_FindFirstPrinterChangeNotification(void)
{
	__asm jmp pfnAheadLib_FindFirstPrinterChangeNotification;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_FindNextPrinterChangeNotification(void)
{
	__asm jmp pfnAheadLib_FindNextPrinterChangeNotification;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_FlushPrinter(void)
{
	__asm jmp pfnAheadLib_FlushPrinter;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_FreePrintNamedPropertyArray(void)
{
	__asm jmp pfnAheadLib_FreePrintNamedPropertyArray;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_FreePrintPropertyValue(void)
{
	__asm jmp pfnAheadLib_FreePrintPropertyValue;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_FreePrinterNotifyInfo(void)
{
	__asm jmp pfnAheadLib_FreePrinterNotifyInfo;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetCorePrinterDriversA(void)
{
	__asm jmp pfnAheadLib_GetCorePrinterDriversA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetCorePrinterDriversW(void)
{
	__asm jmp pfnAheadLib_GetCorePrinterDriversW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetFormA(void)
{
	__asm jmp pfnAheadLib_GetFormA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetFormW(void)
{
	__asm jmp pfnAheadLib_GetFormW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetJobA(void)
{
	__asm jmp pfnAheadLib_GetJobA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetJobNamedPropertyValue(void)
{
	__asm jmp pfnAheadLib_GetJobNamedPropertyValue;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetJobW(void)
{
	__asm jmp pfnAheadLib_GetJobW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrintExecutionData(void)
{
	__asm jmp pfnAheadLib_GetPrintExecutionData;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrintOutputInfo(void)
{
	__asm jmp pfnAheadLib_GetPrintOutputInfo;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrintProcessorDirectoryA(void)
{
	__asm jmp pfnAheadLib_GetPrintProcessorDirectoryA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrintProcessorDirectoryW(void)
{
	__asm jmp pfnAheadLib_GetPrintProcessorDirectoryW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrinterA(void)
{
	__asm jmp pfnAheadLib_GetPrinterA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrinterDataA(void)
{
	__asm jmp pfnAheadLib_GetPrinterDataA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrinterDataExA(void)
{
	__asm jmp pfnAheadLib_GetPrinterDataExA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrinterDataExW(void)
{
	__asm jmp pfnAheadLib_GetPrinterDataExW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrinterDataW(void)
{
	__asm jmp pfnAheadLib_GetPrinterDataW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrinterDriver2A(void)
{
	__asm jmp pfnAheadLib_GetPrinterDriver2A;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrinterDriver2W(void)
{
	__asm jmp pfnAheadLib_GetPrinterDriver2W;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrinterDriverA(void)
{
	__asm jmp pfnAheadLib_GetPrinterDriverA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrinterDriverDirectoryA(void)
{
	__asm jmp pfnAheadLib_GetPrinterDriverDirectoryA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrinterDriverDirectoryW(void)
{
	__asm jmp pfnAheadLib_GetPrinterDriverDirectoryW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrinterDriverPackagePathA(void)
{
	__asm jmp pfnAheadLib_GetPrinterDriverPackagePathA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrinterDriverPackagePathW(void)
{
	__asm jmp pfnAheadLib_GetPrinterDriverPackagePathW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrinterDriverW(void)
{
	__asm jmp pfnAheadLib_GetPrinterDriverW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetPrinterW(void)
{
	__asm jmp pfnAheadLib_GetPrinterW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_GetSpoolFileHandle(void)
{
	__asm jmp pfnAheadLib_GetSpoolFileHandle;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_InstallPrinterDriverFromPackageA(void)
{
	__asm jmp pfnAheadLib_InstallPrinterDriverFromPackageA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_InstallPrinterDriverFromPackageW(void)
{
	__asm jmp pfnAheadLib_InstallPrinterDriverFromPackageW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_IsValidDevmodeA(void)
{
	__asm jmp pfnAheadLib_IsValidDevmodeA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_IsValidDevmodeW(void)
{
	__asm jmp pfnAheadLib_IsValidDevmodeW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_OpenPrinter2A(void)
{
	__asm jmp pfnAheadLib_OpenPrinter2A;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_OpenPrinter2W(void)
{
	__asm jmp pfnAheadLib_OpenPrinter2W;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_OpenPrinterA(void)
{
	__asm jmp pfnAheadLib_OpenPrinterA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_OpenPrinterW(void)
{
	__asm jmp pfnAheadLib_OpenPrinterW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_PlayGdiScriptOnPrinterIC(void)
{
	__asm jmp pfnAheadLib_PlayGdiScriptOnPrinterIC;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_PrinterMessageBoxA(void)
{
	__asm jmp pfnAheadLib_PrinterMessageBoxA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_PrinterMessageBoxW(void)
{
	__asm jmp pfnAheadLib_PrinterMessageBoxW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_PrinterProperties(void)
{
	__asm jmp pfnAheadLib_PrinterProperties;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_ReadPrinter(void)
{
	__asm jmp pfnAheadLib_ReadPrinter;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_RegisterForPrintAsyncNotifications(void)
{
	__asm jmp pfnAheadLib_RegisterForPrintAsyncNotifications;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_ReportJobProcessingProgress(void)
{
	__asm jmp pfnAheadLib_ReportJobProcessingProgress;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_ResetPrinterA(void)
{
	__asm jmp pfnAheadLib_ResetPrinterA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_ResetPrinterW(void)
{
	__asm jmp pfnAheadLib_ResetPrinterW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_ScheduleJob(void)
{
	__asm jmp pfnAheadLib_ScheduleJob;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SeekPrinter(void)
{
	__asm jmp pfnAheadLib_SeekPrinter;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetFormA(void)
{
	__asm jmp pfnAheadLib_SetFormA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetFormW(void)
{
	__asm jmp pfnAheadLib_SetFormW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetJobA(void)
{
	__asm jmp pfnAheadLib_SetJobA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetJobNamedProperty(void)
{
	__asm jmp pfnAheadLib_SetJobNamedProperty;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetJobW(void)
{
	__asm jmp pfnAheadLib_SetJobW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetPortA(void)
{
	__asm jmp pfnAheadLib_SetPortA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetPortW(void)
{
	__asm jmp pfnAheadLib_SetPortW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetPrinterA(void)
{
	__asm jmp pfnAheadLib_SetPrinterA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetPrinterDataA(void)
{
	__asm jmp pfnAheadLib_SetPrinterDataA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetPrinterDataExA(void)
{
	__asm jmp pfnAheadLib_SetPrinterDataExA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetPrinterDataExW(void)
{
	__asm jmp pfnAheadLib_SetPrinterDataExW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetPrinterDataW(void)
{
	__asm jmp pfnAheadLib_SetPrinterDataW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SetPrinterW(void)
{
	__asm jmp pfnAheadLib_SetPrinterW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SplDriverUnloadComplete(void)
{
	__asm jmp pfnAheadLib_SplDriverUnloadComplete;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_SpoolerPrinterEvent(void)
{
	__asm jmp pfnAheadLib_SpoolerPrinterEvent;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_StartDocDlgA(void)
{
	__asm jmp pfnAheadLib_StartDocDlgA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_StartDocPrinterA(void)
{
	__asm jmp pfnAheadLib_StartDocPrinterA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_StartDocPrinterW(void)
{
	__asm jmp pfnAheadLib_StartDocPrinterW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_StartPagePrinter(void)
{
	__asm jmp pfnAheadLib_StartPagePrinter;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_UnRegisterForPrintAsyncNotifications(void)
{
	__asm jmp pfnAheadLib_UnRegisterForPrintAsyncNotifications;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_UploadPrinterDriverPackageA(void)
{
	__asm jmp pfnAheadLib_UploadPrinterDriverPackageA;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_UploadPrinterDriverPackageW(void)
{
	__asm jmp pfnAheadLib_UploadPrinterDriverPackageW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_WaitForPrinterChange(void)
{
	__asm jmp pfnAheadLib_WaitForPrinterChange;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed338(void)
{
	__asm jmp pfnAheadLib_Unnamed338;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed339(void)
{
	__asm jmp pfnAheadLib_Unnamed339;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed340(void)
{
	__asm jmp pfnAheadLib_Unnamed340;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_WritePrinter(void)
{
	__asm jmp pfnAheadLib_WritePrinter;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_XcvDataW(void)
{
	__asm jmp pfnAheadLib_XcvDataW;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed361(void)
{
	__asm jmp pfnAheadLib_Unnamed361;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed362(void)
{
	__asm jmp pfnAheadLib_Unnamed362;
}

EXTERN_C __declspec(naked) void __cdecl AheadLib_Unnamed363(void)
{
	__asm jmp pfnAheadLib_Unnamed363;
}

