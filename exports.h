﻿//  exports.h
//
//	Simple header to instruct the linker to forward function exports to another library.
//

#pragma comment(linker,"/export:AddIPAddress=IPHLPAPI_orig.AddIPAddress,@1")
#pragma comment(linker,"/export:AllocateAndGetInterfaceInfoFromStack=IPHLPAPI_orig.AllocateAndGetInterfaceInfoFromStack,@2")
#pragma comment(linker,"/export:AllocateAndGetIpAddrTableFromStack=IPHLPAPI_orig.AllocateAndGetIpAddrTableFromStack,@3")
#pragma comment(linker,"/export:CancelIPChangeNotify=IPHLPAPI_orig.CancelIPChangeNotify,@4")
#pragma comment(linker,"/export:CancelIfTimestampConfigChange=IPHLPAPI_orig.CancelIfTimestampConfigChange,@5")
#pragma comment(linker,"/export:CancelMibChangeNotify2=IPHLPAPI_orig.CancelMibChangeNotify2,@6")
#pragma comment(linker,"/export:CaptureInterfaceHardwareCrossTimestamp=IPHLPAPI_orig.CaptureInterfaceHardwareCrossTimestamp,@7")
#pragma comment(linker,"/export:CloseCompartment=IPHLPAPI_orig.CloseCompartment,@8")
#pragma comment(linker,"/export:CloseGetIPPhysicalInterfaceForDestination=IPHLPAPI_orig.CloseGetIPPhysicalInterfaceForDestination,@9")
#pragma comment(linker,"/export:ConvertCompartmentGuidToId=IPHLPAPI_orig.ConvertCompartmentGuidToId,@10")
#pragma comment(linker,"/export:ConvertCompartmentIdToGuid=IPHLPAPI_orig.ConvertCompartmentIdToGuid,@11")
#pragma comment(linker,"/export:ConvertGuidToStringA=IPHLPAPI_orig.ConvertGuidToStringA,@12")
#pragma comment(linker,"/export:ConvertGuidToStringW=IPHLPAPI_orig.ConvertGuidToStringW,@13")
#pragma comment(linker,"/export:ConvertInterfaceAliasToLuid=IPHLPAPI_orig.ConvertInterfaceAliasToLuid,@14")
#pragma comment(linker,"/export:ConvertInterfaceGuidToLuid=IPHLPAPI_orig.ConvertInterfaceGuidToLuid,@15")
#pragma comment(linker,"/export:ConvertInterfaceIndexToLuid=IPHLPAPI_orig.ConvertInterfaceIndexToLuid,@16")
#pragma comment(linker,"/export:ConvertInterfaceLuidToAlias=IPHLPAPI_orig.ConvertInterfaceLuidToAlias,@17")
#pragma comment(linker,"/export:ConvertInterfaceLuidToGuid=IPHLPAPI_orig.ConvertInterfaceLuidToGuid,@18")
#pragma comment(linker,"/export:ConvertInterfaceLuidToIndex=IPHLPAPI_orig.ConvertInterfaceLuidToIndex,@19")
#pragma comment(linker,"/export:ConvertInterfaceLuidToNameA=IPHLPAPI_orig.ConvertInterfaceLuidToNameA,@20")
#pragma comment(linker,"/export:ConvertInterfaceLuidToNameW=IPHLPAPI_orig.ConvertInterfaceLuidToNameW,@21")
#pragma comment(linker,"/export:ConvertInterfaceNameToLuidA=IPHLPAPI_orig.ConvertInterfaceNameToLuidA,@22")
#pragma comment(linker,"/export:ConvertInterfaceNameToLuidW=IPHLPAPI_orig.ConvertInterfaceNameToLuidW,@23")
#pragma comment(linker,"/export:ConvertInterfacePhysicalAddressToLuid=IPHLPAPI_orig.ConvertInterfacePhysicalAddressToLuid,@24")
#pragma comment(linker,"/export:ConvertIpv4MaskToLength=IPHLPAPI_orig.ConvertIpv4MaskToLength,@25")
#pragma comment(linker,"/export:ConvertLengthToIpv4Mask=IPHLPAPI_orig.ConvertLengthToIpv4Mask,@26")
#pragma comment(linker,"/export:ConvertRemoteInterfaceAliasToLuid=IPHLPAPI_orig.ConvertRemoteInterfaceAliasToLuid,@27")
#pragma comment(linker,"/export:ConvertRemoteInterfaceGuidToLuid=IPHLPAPI_orig.ConvertRemoteInterfaceGuidToLuid,@28")
#pragma comment(linker,"/export:ConvertRemoteInterfaceIndexToLuid=IPHLPAPI_orig.ConvertRemoteInterfaceIndexToLuid,@29")
#pragma comment(linker,"/export:ConvertRemoteInterfaceLuidToAlias=IPHLPAPI_orig.ConvertRemoteInterfaceLuidToAlias,@30")
#pragma comment(linker,"/export:ConvertRemoteInterfaceLuidToGuid=IPHLPAPI_orig.ConvertRemoteInterfaceLuidToGuid,@31")
#pragma comment(linker,"/export:ConvertRemoteInterfaceLuidToIndex=IPHLPAPI_orig.ConvertRemoteInterfaceLuidToIndex,@32")
#pragma comment(linker,"/export:ConvertStringToGuidA=IPHLPAPI_orig.ConvertStringToGuidA,@33")
#pragma comment(linker,"/export:ConvertStringToGuidW=IPHLPAPI_orig.ConvertStringToGuidW,@34")
#pragma comment(linker,"/export:ConvertStringToInterfacePhysicalAddress=IPHLPAPI_orig.ConvertStringToInterfacePhysicalAddress,@35")
#pragma comment(linker,"/export:CreateAnycastIpAddressEntry=IPHLPAPI_orig.CreateAnycastIpAddressEntry,@36")
#pragma comment(linker,"/export:CreateCompartment=IPHLPAPI_orig.CreateCompartment,@37")
#pragma comment(linker,"/export:CreateIpForwardEntry=IPHLPAPI_orig.CreateIpForwardEntry,@38")
#pragma comment(linker,"/export:CreateIpForwardEntry2=IPHLPAPI_orig.CreateIpForwardEntry2,@39")
#pragma comment(linker,"/export:CreateIpNetEntry=IPHLPAPI_orig.CreateIpNetEntry,@40")
#pragma comment(linker,"/export:CreateIpNetEntry2=IPHLPAPI_orig.CreateIpNetEntry2,@41")
#pragma comment(linker,"/export:CreatePersistentTcpPortReservation=IPHLPAPI_orig.CreatePersistentTcpPortReservation,@42")
#pragma comment(linker,"/export:CreatePersistentUdpPortReservation=IPHLPAPI_orig.CreatePersistentUdpPortReservation,@43")
#pragma comment(linker,"/export:CreateProxyArpEntry=IPHLPAPI_orig.CreateProxyArpEntry,@44")
#pragma comment(linker,"/export:CreateSortedAddressPairs=IPHLPAPI_orig.CreateSortedAddressPairs,@45")
#pragma comment(linker,"/export:CreateUnicastIpAddressEntry=IPHLPAPI_orig.CreateUnicastIpAddressEntry,@46")
#pragma comment(linker,"/export:DeleteAnycastIpAddressEntry=IPHLPAPI_orig.DeleteAnycastIpAddressEntry,@47")
#pragma comment(linker,"/export:DeleteCompartment=IPHLPAPI_orig.DeleteCompartment,@48")
#pragma comment(linker,"/export:DeleteIPAddress=IPHLPAPI_orig.DeleteIPAddress,@49")
#pragma comment(linker,"/export:DeleteIpForwardEntry=IPHLPAPI_orig.DeleteIpForwardEntry,@50")
#pragma comment(linker,"/export:DeleteIpForwardEntry2=IPHLPAPI_orig.DeleteIpForwardEntry2,@51")
#pragma comment(linker,"/export:DeleteIpNetEntry=IPHLPAPI_orig.DeleteIpNetEntry,@52")
#pragma comment(linker,"/export:DeleteIpNetEntry2=IPHLPAPI_orig.DeleteIpNetEntry2,@53")
#pragma comment(linker,"/export:DeletePersistentTcpPortReservation=IPHLPAPI_orig.DeletePersistentTcpPortReservation,@54")
#pragma comment(linker,"/export:DeletePersistentUdpPortReservation=IPHLPAPI_orig.DeletePersistentUdpPortReservation,@55")
#pragma comment(linker,"/export:DeleteProxyArpEntry=IPHLPAPI_orig.DeleteProxyArpEntry,@56")
#pragma comment(linker,"/export:DeleteUnicastIpAddressEntry=IPHLPAPI_orig.DeleteUnicastIpAddressEntry,@57")
#pragma comment(linker,"/export:DisableMediaSense=IPHLPAPI_orig.DisableMediaSense,@58")
#pragma comment(linker,"/export:EnableRouter=IPHLPAPI_orig.EnableRouter,@59")
#pragma comment(linker,"/export:FlushIpNetTable=IPHLPAPI_orig.FlushIpNetTable,@60")
#pragma comment(linker,"/export:FlushIpNetTable2=IPHLPAPI_orig.FlushIpNetTable2,@61")
#pragma comment(linker,"/export:FlushIpPathTable=IPHLPAPI_orig.FlushIpPathTable,@62")
#pragma comment(linker,"/export:FreeDnsSettings=IPHLPAPI_orig.FreeDnsSettings,@63")
#pragma comment(linker,"/export:FreeInterfaceDnsSettings=IPHLPAPI_orig.FreeInterfaceDnsSettings,@64")
#pragma comment(linker,"/export:FreeMibTable=IPHLPAPI_orig.FreeMibTable,@65")
#pragma comment(linker,"/export:GetAdapterIndex=IPHLPAPI_orig.GetAdapterIndex,@66")
#pragma comment(linker,"/export:GetAdapterOrderMap=IPHLPAPI_orig.GetAdapterOrderMap,@67")
#pragma comment(linker,"/export:GetAdaptersAddresses=IPHLPAPI_orig.GetAdaptersAddresses,@68")
#pragma comment(linker,"/export:GetAdaptersInfo=IPHLPAPI_orig.GetAdaptersInfo,@69")
#pragma comment(linker,"/export:GetAnycastIpAddressEntry=IPHLPAPI_orig.GetAnycastIpAddressEntry,@70")
#pragma comment(linker,"/export:GetAnycastIpAddressTable=IPHLPAPI_orig.GetAnycastIpAddressTable,@71")
#pragma comment(linker,"/export:GetBestInterface=IPHLPAPI_orig.GetBestInterface,@72")
#pragma comment(linker,"/export:GetBestInterfaceEx=IPHLPAPI_orig.GetBestInterfaceEx,@73")
#pragma comment(linker,"/export:GetBestRoute=IPHLPAPI_orig.GetBestRoute,@74")
#pragma comment(linker,"/export:GetBestRoute2=IPHLPAPI_orig.GetBestRoute2,@75")
#pragma comment(linker,"/export:GetCurrentThreadCompartmentId=IPHLPAPI_orig.GetCurrentThreadCompartmentId,@76")
#pragma comment(linker,"/export:GetCurrentThreadCompartmentScope=IPHLPAPI_orig.GetCurrentThreadCompartmentScope,@77")
#pragma comment(linker,"/export:GetDefaultCompartmentId=IPHLPAPI_orig.GetDefaultCompartmentId,@78")
#pragma comment(linker,"/export:GetDnsSettings=IPHLPAPI_orig.GetDnsSettings,@79")
#pragma comment(linker,"/export:GetExtendedTcpTable=IPHLPAPI_orig.GetExtendedTcpTable,@80")
#pragma comment(linker,"/export:GetExtendedUdpTable=IPHLPAPI_orig.GetExtendedUdpTable,@81")
#pragma comment(linker,"/export:GetFriendlyIfIndex=IPHLPAPI_orig.GetFriendlyIfIndex,@82")
#pragma comment(linker,"/export:GetIcmpStatistics=IPHLPAPI_orig.GetIcmpStatistics,@83")
#pragma comment(linker,"/export:GetIcmpStatisticsEx=IPHLPAPI_orig.GetIcmpStatisticsEx,@84")
#pragma comment(linker,"/export:GetIfEntry=IPHLPAPI_orig.GetIfEntry,@85")
#pragma comment(linker,"/export:GetIfEntry2=IPHLPAPI_orig.GetIfEntry2,@86")
#pragma comment(linker,"/export:GetIfEntry2Ex=IPHLPAPI_orig.GetIfEntry2Ex,@87")
#pragma comment(linker,"/export:GetIfStackTable=IPHLPAPI_orig.GetIfStackTable,@88")
#pragma comment(linker,"/export:GetIfTable=IPHLPAPI_orig.GetIfTable,@89")
#pragma comment(linker,"/export:GetIfTable2=IPHLPAPI_orig.GetIfTable2,@90")
#pragma comment(linker,"/export:GetIfTable2Ex=IPHLPAPI_orig.GetIfTable2Ex,@91")
#pragma comment(linker,"/export:GetInterfaceCompartmentId=IPHLPAPI_orig.GetInterfaceCompartmentId,@92")
#pragma comment(linker,"/export:GetInterfaceCurrentTimestampCapabilities=IPHLPAPI_orig.GetInterfaceCurrentTimestampCapabilities,@93")
#pragma comment(linker,"/export:GetInterfaceDnsSettings=IPHLPAPI_orig.GetInterfaceDnsSettings,@94")
#pragma comment(linker,"/export:GetInterfaceHardwareTimestampCapabilities=IPHLPAPI_orig.GetInterfaceHardwareTimestampCapabilities,@95")
#pragma comment(linker,"/export:GetInterfaceInfo=IPHLPAPI_orig.GetInterfaceInfo,@96")
#pragma comment(linker,"/export:GetInvertedIfStackTable=IPHLPAPI_orig.GetInvertedIfStackTable,@97")
#pragma comment(linker,"/export:GetIpAddrTable=IPHLPAPI_orig.GetIpAddrTable,@98")
#pragma comment(linker,"/export:GetIpErrorString=IPHLPAPI_orig.GetIpErrorString,@99")
#pragma comment(linker,"/export:GetIpForwardEntry2=IPHLPAPI_orig.GetIpForwardEntry2,@100")
#pragma comment(linker,"/export:GetIpForwardTable=IPHLPAPI_orig.GetIpForwardTable,@101")
#pragma comment(linker,"/export:GetIpForwardTable2=IPHLPAPI_orig.GetIpForwardTable2,@102")
#pragma comment(linker,"/export:GetIpInterfaceEntry=IPHLPAPI_orig.GetIpInterfaceEntry,@103")
#pragma comment(linker,"/export:GetIpInterfaceTable=IPHLPAPI_orig.GetIpInterfaceTable,@104")
#pragma comment(linker,"/export:GetIpNetEntry2=IPHLPAPI_orig.GetIpNetEntry2,@105")
#pragma comment(linker,"/export:GetIpNetTable=IPHLPAPI_orig.GetIpNetTable,@106")
#pragma comment(linker,"/export:GetIpNetTable2=IPHLPAPI_orig.GetIpNetTable2,@107")
#pragma comment(linker,"/export:GetIpNetworkConnectionBandwidthEstimates=IPHLPAPI_orig.GetIpNetworkConnectionBandwidthEstimates,@108")
#pragma comment(linker,"/export:GetIpPathEntry=IPHLPAPI_orig.GetIpPathEntry,@109")
#pragma comment(linker,"/export:GetIpPathTable=IPHLPAPI_orig.GetIpPathTable,@110")
#pragma comment(linker,"/export:GetIpStatistics=IPHLPAPI_orig.GetIpStatistics,@111")
#pragma comment(linker,"/export:GetIpStatisticsEx=IPHLPAPI_orig.GetIpStatisticsEx,@112")
#pragma comment(linker,"/export:GetJobCompartmentId=IPHLPAPI_orig.GetJobCompartmentId,@113")
#pragma comment(linker,"/export:GetMulticastIpAddressEntry=IPHLPAPI_orig.GetMulticastIpAddressEntry,@114")
#pragma comment(linker,"/export:GetMulticastIpAddressTable=IPHLPAPI_orig.GetMulticastIpAddressTable,@115")
#pragma comment(linker,"/export:GetNetworkConnectivityHint=IPHLPAPI_orig.GetNetworkConnectivityHint,@116")
#pragma comment(linker,"/export:GetNetworkConnectivityHintForInterface=IPHLPAPI_orig.GetNetworkConnectivityHintForInterface,@117")
#pragma comment(linker,"/export:GetNetworkInformation=IPHLPAPI_orig.GetNetworkInformation,@118")
#pragma comment(linker,"/export:GetNetworkParams=IPHLPAPI_orig.GetNetworkParams,@119")
#pragma comment(linker,"/export:GetNumberOfInterfaces=IPHLPAPI_orig.GetNumberOfInterfaces,@120")
#pragma comment(linker,"/export:GetOwnerModuleFromPidAndInfo=IPHLPAPI_orig.GetOwnerModuleFromPidAndInfo,@121")
#pragma comment(linker,"/export:GetOwnerModuleFromTcp6Entry=IPHLPAPI_orig.GetOwnerModuleFromTcp6Entry,@122")
#pragma comment(linker,"/export:GetOwnerModuleFromTcpEntry=IPHLPAPI_orig.GetOwnerModuleFromTcpEntry,@123")
#pragma comment(linker,"/export:GetOwnerModuleFromUdp6Entry=IPHLPAPI_orig.GetOwnerModuleFromUdp6Entry,@124")
#pragma comment(linker,"/export:GetOwnerModuleFromUdpEntry=IPHLPAPI_orig.GetOwnerModuleFromUdpEntry,@125")
#pragma comment(linker,"/export:GetPerAdapterInfo=IPHLPAPI_orig.GetPerAdapterInfo,@126")
#pragma comment(linker,"/export:GetPerTcp6ConnectionEStats=IPHLPAPI_orig.GetPerTcp6ConnectionEStats,@127")
#pragma comment(linker,"/export:GetPerTcp6ConnectionStats=IPHLPAPI_orig.GetPerTcp6ConnectionStats,@128")
#pragma comment(linker,"/export:GetPerTcpConnectionEStats=IPHLPAPI_orig.GetPerTcpConnectionEStats,@129")
#pragma comment(linker,"/export:GetPerTcpConnectionStats=IPHLPAPI_orig.GetPerTcpConnectionStats,@130")
#pragma comment(linker,"/export:GetRTTAndHopCount=IPHLPAPI_orig.GetRTTAndHopCount,@131")
#pragma comment(linker,"/export:GetSessionCompartmentId=IPHLPAPI_orig.GetSessionCompartmentId,@132")
#pragma comment(linker,"/export:GetTcp6Table=IPHLPAPI_orig.GetTcp6Table,@133")
#pragma comment(linker,"/export:GetTcp6Table2=IPHLPAPI_orig.GetTcp6Table2,@134")
#pragma comment(linker,"/export:GetTcpStatistics=IPHLPAPI_orig.GetTcpStatistics,@135")
#pragma comment(linker,"/export:GetTcpStatisticsEx=IPHLPAPI_orig.GetTcpStatisticsEx,@136")
#pragma comment(linker,"/export:GetTcpStatisticsEx2=IPHLPAPI_orig.GetTcpStatisticsEx2,@137")
#pragma comment(linker,"/export:GetTcpTable=IPHLPAPI_orig.GetTcpTable,@138")
#pragma comment(linker,"/export:GetTcpTable2=IPHLPAPI_orig.GetTcpTable2,@139")
#pragma comment(linker,"/export:GetTeredoPort=IPHLPAPI_orig.GetTeredoPort,@140")
#pragma comment(linker,"/export:GetUdp6Table=IPHLPAPI_orig.GetUdp6Table,@141")
#pragma comment(linker,"/export:GetUdpStatistics=IPHLPAPI_orig.GetUdpStatistics,@142")
#pragma comment(linker,"/export:GetUdpStatisticsEx=IPHLPAPI_orig.GetUdpStatisticsEx,@143")
#pragma comment(linker,"/export:GetUdpStatisticsEx2=IPHLPAPI_orig.GetUdpStatisticsEx2,@144")
#pragma comment(linker,"/export:GetUdpTable=IPHLPAPI_orig.GetUdpTable,@145")
#pragma comment(linker,"/export:GetUniDirectionalAdapterInfo=IPHLPAPI_orig.GetUniDirectionalAdapterInfo,@146")
#pragma comment(linker,"/export:GetUnicastIpAddressEntry=IPHLPAPI_orig.GetUnicastIpAddressEntry,@147")
#pragma comment(linker,"/export:GetUnicastIpAddressTable=IPHLPAPI_orig.GetUnicastIpAddressTable,@148")
#pragma comment(linker,"/export:GetWPAOACSupportLevel=IPHLPAPI_orig.GetWPAOACSupportLevel,@149")
#pragma comment(linker,"/export:Icmp6CreateFile=IPHLPAPI_orig.Icmp6CreateFile,@150")
#pragma comment(linker,"/export:Icmp6ParseReplies=IPHLPAPI_orig.Icmp6ParseReplies,@151")
#pragma comment(linker,"/export:Icmp6SendEcho2=IPHLPAPI_orig.Icmp6SendEcho2,@152")
#pragma comment(linker,"/export:IcmpCloseHandle=IPHLPAPI_orig.IcmpCloseHandle,@153")
#pragma comment(linker,"/export:IcmpCreateFile=IPHLPAPI_orig.IcmpCreateFile,@154")
#pragma comment(linker,"/export:IcmpParseReplies=IPHLPAPI_orig.IcmpParseReplies,@155")
#pragma comment(linker,"/export:IcmpSendEcho=IPHLPAPI_orig.IcmpSendEcho,@156")
#pragma comment(linker,"/export:IcmpSendEcho2=IPHLPAPI_orig.IcmpSendEcho2,@157")
#pragma comment(linker,"/export:IcmpSendEcho2Ex=IPHLPAPI_orig.IcmpSendEcho2Ex,@158")
#pragma comment(linker,"/export:InitializeCompartmentEntry=IPHLPAPI_orig.InitializeCompartmentEntry,@159")
#pragma comment(linker,"/export:InitializeIpForwardEntry=IPHLPAPI_orig.InitializeIpForwardEntry,@160")
#pragma comment(linker,"/export:InitializeIpInterfaceEntry=IPHLPAPI_orig.InitializeIpInterfaceEntry,@161")
#pragma comment(linker,"/export:InitializeUnicastIpAddressEntry=IPHLPAPI_orig.InitializeUnicastIpAddressEntry,@162")
#pragma comment(linker,"/export:InternalCleanupPersistentStore=IPHLPAPI_orig.InternalCleanupPersistentStore,@163")
#pragma comment(linker,"/export:InternalCreateAnycastIpAddressEntry=IPHLPAPI_orig.InternalCreateAnycastIpAddressEntry,@164")
#pragma comment(linker,"/export:InternalCreateIpForwardEntry=IPHLPAPI_orig.InternalCreateIpForwardEntry,@165")
#pragma comment(linker,"/export:InternalCreateIpForwardEntry2=IPHLPAPI_orig.InternalCreateIpForwardEntry2,@166")
#pragma comment(linker,"/export:InternalCreateIpNetEntry=IPHLPAPI_orig.InternalCreateIpNetEntry,@167")
#pragma comment(linker,"/export:InternalCreateIpNetEntry2=IPHLPAPI_orig.InternalCreateIpNetEntry2,@168")
#pragma comment(linker,"/export:InternalCreateOrRefIpForwardEntry2=IPHLPAPI_orig.InternalCreateOrRefIpForwardEntry2,@169")
#pragma comment(linker,"/export:InternalCreateUnicastIpAddressEntry=IPHLPAPI_orig.InternalCreateUnicastIpAddressEntry,@170")
#pragma comment(linker,"/export:InternalDeleteAnycastIpAddressEntry=IPHLPAPI_orig.InternalDeleteAnycastIpAddressEntry,@171")
#pragma comment(linker,"/export:InternalDeleteIpForwardEntry=IPHLPAPI_orig.InternalDeleteIpForwardEntry,@172")
#pragma comment(linker,"/export:InternalDeleteIpForwardEntry2=IPHLPAPI_orig.InternalDeleteIpForwardEntry2,@173")
#pragma comment(linker,"/export:InternalDeleteIpNetEntry=IPHLPAPI_orig.InternalDeleteIpNetEntry,@174")
#pragma comment(linker,"/export:InternalDeleteIpNetEntry2=IPHLPAPI_orig.InternalDeleteIpNetEntry2,@175")
#pragma comment(linker,"/export:InternalDeleteUnicastIpAddressEntry=IPHLPAPI_orig.InternalDeleteUnicastIpAddressEntry,@176")
#pragma comment(linker,"/export:InternalFindInterfaceByAddress=IPHLPAPI_orig.InternalFindInterfaceByAddress,@177")
#pragma comment(linker,"/export:InternalGetAnycastIpAddressEntry=IPHLPAPI_orig.InternalGetAnycastIpAddressEntry,@178")
#pragma comment(linker,"/export:InternalGetAnycastIpAddressTable=IPHLPAPI_orig.InternalGetAnycastIpAddressTable,@179")
#pragma comment(linker,"/export:InternalGetBoundTcp6EndpointTable=IPHLPAPI_orig.InternalGetBoundTcp6EndpointTable,@180")
#pragma comment(linker,"/export:InternalGetBoundTcpEndpointTable=IPHLPAPI_orig.InternalGetBoundTcpEndpointTable,@181")
#pragma comment(linker,"/export:InternalGetForwardIpTable2=IPHLPAPI_orig.InternalGetForwardIpTable2,@182")
#pragma comment(linker,"/export:InternalGetIPPhysicalInterfaceForDestination=IPHLPAPI_orig.InternalGetIPPhysicalInterfaceForDestination,@183")
#pragma comment(linker,"/export:InternalGetIfEntry2=IPHLPAPI_orig.InternalGetIfEntry2,@184")
#pragma comment(linker,"/export:InternalGetIfTable=IPHLPAPI_orig.InternalGetIfTable,@185")
#pragma comment(linker,"/export:InternalGetIfTable2=IPHLPAPI_orig.InternalGetIfTable2,@186")
#pragma comment(linker,"/export:InternalGetIpAddrTable=IPHLPAPI_orig.InternalGetIpAddrTable,@187")
#pragma comment(linker,"/export:InternalGetIpForwardEntry2=IPHLPAPI_orig.InternalGetIpForwardEntry2,@188")
#pragma comment(linker,"/export:InternalGetIpForwardTable=IPHLPAPI_orig.InternalGetIpForwardTable,@189")
#pragma comment(linker,"/export:InternalGetIpInterfaceEntry=IPHLPAPI_orig.InternalGetIpInterfaceEntry,@190")
#pragma comment(linker,"/export:InternalGetIpInterfaceTable=IPHLPAPI_orig.InternalGetIpInterfaceTable,@191")
#pragma comment(linker,"/export:InternalGetIpNetEntry2=IPHLPAPI_orig.InternalGetIpNetEntry2,@192")
#pragma comment(linker,"/export:InternalGetIpNetTable=IPHLPAPI_orig.InternalGetIpNetTable,@193")
#pragma comment(linker,"/export:InternalGetIpNetTable2=IPHLPAPI_orig.InternalGetIpNetTable2,@194")
#pragma comment(linker,"/export:InternalGetMulticastIpAddressEntry=IPHLPAPI_orig.InternalGetMulticastIpAddressEntry,@195")
#pragma comment(linker,"/export:InternalGetMulticastIpAddressTable=IPHLPAPI_orig.InternalGetMulticastIpAddressTable,@196")
#pragma comment(linker,"/export:InternalGetRtcSlotInformation=IPHLPAPI_orig.InternalGetRtcSlotInformation,@197")
#pragma comment(linker,"/export:InternalGetTcp6Table2=IPHLPAPI_orig.InternalGetTcp6Table2,@198")
#pragma comment(linker,"/export:InternalGetTcp6TableWithOwnerModule=IPHLPAPI_orig.InternalGetTcp6TableWithOwnerModule,@199")
#pragma comment(linker,"/export:InternalGetTcp6TableWithOwnerPid=IPHLPAPI_orig.InternalGetTcp6TableWithOwnerPid,@200")
#pragma comment(linker,"/export:InternalGetTcpTable=IPHLPAPI_orig.InternalGetTcpTable,@201")
#pragma comment(linker,"/export:InternalGetTcpTable2=IPHLPAPI_orig.InternalGetTcpTable2,@202")
#pragma comment(linker,"/export:InternalGetTcpTableEx=IPHLPAPI_orig.InternalGetTcpTableEx,@203")
#pragma comment(linker,"/export:InternalGetTcpTableWithOwnerModule=IPHLPAPI_orig.InternalGetTcpTableWithOwnerModule,@204")
#pragma comment(linker,"/export:InternalGetTcpTableWithOwnerPid=IPHLPAPI_orig.InternalGetTcpTableWithOwnerPid,@205")
#pragma comment(linker,"/export:InternalGetTunnelPhysicalAdapter=IPHLPAPI_orig.InternalGetTunnelPhysicalAdapter,@206")
#pragma comment(linker,"/export:InternalGetUdp6TableWithOwnerModule=IPHLPAPI_orig.InternalGetUdp6TableWithOwnerModule,@207")
#pragma comment(linker,"/export:InternalGetUdp6TableWithOwnerPid=IPHLPAPI_orig.InternalGetUdp6TableWithOwnerPid,@208")
#pragma comment(linker,"/export:InternalGetUdpTable=IPHLPAPI_orig.InternalGetUdpTable,@209")
#pragma comment(linker,"/export:InternalGetUdpTableEx=IPHLPAPI_orig.InternalGetUdpTableEx,@210")
#pragma comment(linker,"/export:InternalGetUdpTableWithOwnerModule=IPHLPAPI_orig.InternalGetUdpTableWithOwnerModule,@211")
#pragma comment(linker,"/export:InternalGetUdpTableWithOwnerPid=IPHLPAPI_orig.InternalGetUdpTableWithOwnerPid,@212")
#pragma comment(linker,"/export:InternalGetUnicastIpAddressEntry=IPHLPAPI_orig.InternalGetUnicastIpAddressEntry,@213")
#pragma comment(linker,"/export:InternalGetUnicastIpAddressTable=IPHLPAPI_orig.InternalGetUnicastIpAddressTable,@214")
#pragma comment(linker,"/export:InternalIcmpCreateFileEx=IPHLPAPI_orig.InternalIcmpCreateFileEx,@215")
#pragma comment(linker,"/export:InternalSetIfEntry=IPHLPAPI_orig.InternalSetIfEntry,@216")
#pragma comment(linker,"/export:InternalSetIpForwardEntry=IPHLPAPI_orig.InternalSetIpForwardEntry,@217")
#pragma comment(linker,"/export:InternalSetIpForwardEntry2=IPHLPAPI_orig.InternalSetIpForwardEntry2,@218")
#pragma comment(linker,"/export:InternalSetIpInterfaceEntry=IPHLPAPI_orig.InternalSetIpInterfaceEntry,@219")
#pragma comment(linker,"/export:InternalSetIpNetEntry=IPHLPAPI_orig.InternalSetIpNetEntry,@220")
#pragma comment(linker,"/export:InternalSetIpNetEntry2=IPHLPAPI_orig.InternalSetIpNetEntry2,@221")
#pragma comment(linker,"/export:InternalSetIpStats=IPHLPAPI_orig.InternalSetIpStats,@222")
#pragma comment(linker,"/export:InternalSetTcpEntry=IPHLPAPI_orig.InternalSetTcpEntry,@223")
#pragma comment(linker,"/export:InternalSetTeredoPort=IPHLPAPI_orig.InternalSetTeredoPort,@224")
#pragma comment(linker,"/export:InternalSetUnicastIpAddressEntry=IPHLPAPI_orig.InternalSetUnicastIpAddressEntry,@225")
#pragma comment(linker,"/export:IpReleaseAddress=IPHLPAPI_orig.IpReleaseAddress,@226")
#pragma comment(linker,"/export:IpRenewAddress=IPHLPAPI_orig.IpRenewAddress,@227")
#pragma comment(linker,"/export:LookupPersistentTcpPortReservation=IPHLPAPI_orig.LookupPersistentTcpPortReservation,@228")
#pragma comment(linker,"/export:LookupPersistentUdpPortReservation=IPHLPAPI_orig.LookupPersistentUdpPortReservation,@229")
#pragma comment(linker,"/export:NTPTimeToNTFileTime=IPHLPAPI_orig.NTPTimeToNTFileTime,@230")
#pragma comment(linker,"/export:NTTimeToNTPTime=IPHLPAPI_orig.NTTimeToNTPTime,@231")
#pragma comment(linker,"/export:NhGetGuidFromInterfaceName=IPHLPAPI_orig.NhGetGuidFromInterfaceName,@232")
#pragma comment(linker,"/export:NhGetInterfaceDescriptionFromGuid=IPHLPAPI_orig.NhGetInterfaceDescriptionFromGuid,@233")
#pragma comment(linker,"/export:NhGetInterfaceNameFromDeviceGuid=IPHLPAPI_orig.NhGetInterfaceNameFromDeviceGuid,@234")
#pragma comment(linker,"/export:NhGetInterfaceNameFromGuid=IPHLPAPI_orig.NhGetInterfaceNameFromGuid,@235")
#pragma comment(linker,"/export:NhpAllocateAndGetInterfaceInfoFromStack=IPHLPAPI_orig.NhpAllocateAndGetInterfaceInfoFromStack,@236")
#pragma comment(linker,"/export:NotifyAddrChange=IPHLPAPI_orig.NotifyAddrChange,@237")
#pragma comment(linker,"/export:NotifyCompartmentChange=IPHLPAPI_orig.NotifyCompartmentChange,@238")
#pragma comment(linker,"/export:NotifyIfTimestampConfigChange=IPHLPAPI_orig.NotifyIfTimestampConfigChange,@239")
#pragma comment(linker,"/export:NotifyIpInterfaceChange=IPHLPAPI_orig.NotifyIpInterfaceChange,@240")
#pragma comment(linker,"/export:NotifyNetworkConnectivityHintChange=IPHLPAPI_orig.NotifyNetworkConnectivityHintChange,@241")
#pragma comment(linker,"/export:NotifyRouteChange=IPHLPAPI_orig.NotifyRouteChange,@242")
#pragma comment(linker,"/export:NotifyRouteChange2=IPHLPAPI_orig.NotifyRouteChange2,@243")
#pragma comment(linker,"/export:NotifyStableUnicastIpAddressTable=IPHLPAPI_orig.NotifyStableUnicastIpAddressTable,@244")
#pragma comment(linker,"/export:NotifyTeredoPortChange=IPHLPAPI_orig.NotifyTeredoPortChange,@245")
#pragma comment(linker,"/export:NotifyUnicastIpAddressChange=IPHLPAPI_orig.NotifyUnicastIpAddressChange,@246")
#pragma comment(linker,"/export:OpenCompartment=IPHLPAPI_orig.OpenCompartment,@247")
#pragma comment(linker,"/export:ParseNetworkString=IPHLPAPI_orig.ParseNetworkString,@248")
#pragma comment(linker,"/export:PfAddFiltersToInterface=IPHLPAPI_orig.PfAddFiltersToInterface,@249")
#pragma comment(linker,"/export:PfAddGlobalFilterToInterface=IPHLPAPI_orig.PfAddGlobalFilterToInterface,@250")
#pragma comment(linker,"/export:PfBindInterfaceToIPAddress=IPHLPAPI_orig.PfBindInterfaceToIPAddress,@251")
#pragma comment(linker,"/export:PfBindInterfaceToIndex=IPHLPAPI_orig.PfBindInterfaceToIndex,@252")
#pragma comment(linker,"/export:PfCreateInterface=IPHLPAPI_orig.PfCreateInterface,@253")
#pragma comment(linker,"/export:PfDeleteInterface=IPHLPAPI_orig.PfDeleteInterface,@254")
#pragma comment(linker,"/export:PfDeleteLog=IPHLPAPI_orig.PfDeleteLog,@255")
#pragma comment(linker,"/export:PfGetInterfaceStatistics=IPHLPAPI_orig.PfGetInterfaceStatistics,@256")
#pragma comment(linker,"/export:PfMakeLog=IPHLPAPI_orig.PfMakeLog,@257")
#pragma comment(linker,"/export:PfRebindFilters=IPHLPAPI_orig.PfRebindFilters,@258")
#pragma comment(linker,"/export:PfRemoveFilterHandles=IPHLPAPI_orig.PfRemoveFilterHandles,@259")
#pragma comment(linker,"/export:PfRemoveFiltersFromInterface=IPHLPAPI_orig.PfRemoveFiltersFromInterface,@260")
#pragma comment(linker,"/export:PfRemoveGlobalFilterFromInterface=IPHLPAPI_orig.PfRemoveGlobalFilterFromInterface,@261")
#pragma comment(linker,"/export:PfSetLogBuffer=IPHLPAPI_orig.PfSetLogBuffer,@262")
#pragma comment(linker,"/export:PfTestPacket=IPHLPAPI_orig.PfTestPacket,@263")
#pragma comment(linker,"/export:PfUnBindInterface=IPHLPAPI_orig.PfUnBindInterface,@264")
#pragma comment(linker,"/export:ResolveIpNetEntry2=IPHLPAPI_orig.ResolveIpNetEntry2,@265")
#pragma comment(linker,"/export:ResolveNeighbor=IPHLPAPI_orig.ResolveNeighbor,@266")
#pragma comment(linker,"/export:RestoreMediaSense=IPHLPAPI_orig.RestoreMediaSense,@267")
#pragma comment(linker,"/export:SendARP=IPHLPAPI_orig.SendARP,@268")
#pragma comment(linker,"/export:SetAdapterIpAddress=IPHLPAPI_orig.SetAdapterIpAddress,@269")
#pragma comment(linker,"/export:SetCurrentThreadCompartmentId=IPHLPAPI_orig.SetCurrentThreadCompartmentId,@270")
#pragma comment(linker,"/export:SetCurrentThreadCompartmentScope=IPHLPAPI_orig.SetCurrentThreadCompartmentScope,@271")
#pragma comment(linker,"/export:SetDnsSettings=IPHLPAPI_orig.SetDnsSettings,@272")
#pragma comment(linker,"/export:SetIfEntry=IPHLPAPI_orig.SetIfEntry,@273")
#pragma comment(linker,"/export:SetInterfaceDnsSettings=IPHLPAPI_orig.SetInterfaceDnsSettings,@274")
#pragma comment(linker,"/export:SetIpForwardEntry=IPHLPAPI_orig.SetIpForwardEntry,@275")
#pragma comment(linker,"/export:SetIpForwardEntry2=IPHLPAPI_orig.SetIpForwardEntry2,@276")
#pragma comment(linker,"/export:SetIpInterfaceEntry=IPHLPAPI_orig.SetIpInterfaceEntry,@277")
#pragma comment(linker,"/export:SetIpNetEntry=IPHLPAPI_orig.SetIpNetEntry,@278")
#pragma comment(linker,"/export:SetIpNetEntry2=IPHLPAPI_orig.SetIpNetEntry2,@279")
#pragma comment(linker,"/export:SetIpStatistics=IPHLPAPI_orig.SetIpStatistics,@280")
#pragma comment(linker,"/export:SetIpStatisticsEx=IPHLPAPI_orig.SetIpStatisticsEx,@281")
#pragma comment(linker,"/export:SetIpTTL=IPHLPAPI_orig.SetIpTTL,@282")
#pragma comment(linker,"/export:SetJobCompartmentId=IPHLPAPI_orig.SetJobCompartmentId,@283")
#pragma comment(linker,"/export:SetNetworkInformation=IPHLPAPI_orig.SetNetworkInformation,@284")
#pragma comment(linker,"/export:SetPerTcp6ConnectionEStats=IPHLPAPI_orig.SetPerTcp6ConnectionEStats,@285")
#pragma comment(linker,"/export:SetPerTcp6ConnectionStats=IPHLPAPI_orig.SetPerTcp6ConnectionStats,@286")
#pragma comment(linker,"/export:SetPerTcpConnectionEStats=IPHLPAPI_orig.SetPerTcpConnectionEStats,@287")
#pragma comment(linker,"/export:SetPerTcpConnectionStats=IPHLPAPI_orig.SetPerTcpConnectionStats,@288")
#pragma comment(linker,"/export:SetSessionCompartmentId=IPHLPAPI_orig.SetSessionCompartmentId,@289")
#pragma comment(linker,"/export:SetTcpEntry=IPHLPAPI_orig.SetTcpEntry,@290")
#pragma comment(linker,"/export:SetUnicastIpAddressEntry=IPHLPAPI_orig.SetUnicastIpAddressEntry,@291")
#pragma comment(linker,"/export:UnenableRouter=IPHLPAPI_orig.UnenableRouter,@292")
#pragma comment(linker,"/export:do_echo_rep=IPHLPAPI_orig.do_echo_rep,@293")
#pragma comment(linker,"/export:do_echo_req=IPHLPAPI_orig.do_echo_req,@294")
#pragma comment(linker,"/export:if_indextoname=IPHLPAPI_orig.if_indextoname,@295")
#pragma comment(linker,"/export:if_nametoindex=IPHLPAPI_orig.if_nametoindex,@296")
#pragma comment(linker,"/export:register_icmp=IPHLPAPI_orig.register_icmp,@297")