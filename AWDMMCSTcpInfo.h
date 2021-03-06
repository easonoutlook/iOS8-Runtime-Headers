/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMMCSTcpInfo : PBCodable <NSCopying> {
    unsigned long long _tcpiCellRxbytes;
    unsigned long long _tcpiCellRxpackets;
    unsigned long long _tcpiCellTxbytes;
    unsigned long long _tcpiCellTxpackets;
    unsigned long long _tcpiRxbytes;
    unsigned long long _tcpiRxduplicatebytes;
    unsigned long long _tcpiRxoutoforderbytes;
    unsigned long long _tcpiRxpackets;
    unsigned long long _tcpiSndBw;
    unsigned long long _tcpiTxbytes;
    unsigned long long _tcpiTxpackets;
    unsigned long long _tcpiTxretransmitbytes;
    unsigned long long _tcpiTxunacked;
    unsigned long long _tcpiWifiRxbytes;
    unsigned long long _tcpiWifiRxpackets;
    unsigned long long _tcpiWifiTxbytes;
    unsigned long long _tcpiWifiTxpackets;
    unsigned int _tcpiFlags;
    int _tcpiLastOutif;
    unsigned int _tcpiOptions;
    unsigned int _tcpiRcvMss;
    unsigned int _tcpiRcvNxt;
    unsigned int _tcpiRcvSpace;
    unsigned int _tcpiRcvWscale;
    unsigned int _tcpiRto;
    unsigned int _tcpiRttbest;
    unsigned int _tcpiRttcur;
    unsigned int _tcpiRttvar;
    unsigned int _tcpiSndCwnd;
    unsigned int _tcpiSndMss;
    unsigned int _tcpiSndNxt;
    unsigned int _tcpiSndSbbytes;
    unsigned int _tcpiSndSsthresh;
    unsigned int _tcpiSndWnd;
    unsigned int _tcpiSndWscale;
    unsigned int _tcpiSrtt;
    unsigned int _tcpiState;
    int _tcpiSynrexmits;
    int _tcpiUnused1;
    unsigned int _tcpiUnused2;
    struct { 
        unsigned int tcpiCellRxbytes : 1; 
        unsigned int tcpiCellRxpackets : 1; 
        unsigned int tcpiCellTxbytes : 1; 
        unsigned int tcpiCellTxpackets : 1; 
        unsigned int tcpiRxbytes : 1; 
        unsigned int tcpiRxduplicatebytes : 1; 
        unsigned int tcpiRxoutoforderbytes : 1; 
        unsigned int tcpiRxpackets : 1; 
        unsigned int tcpiSndBw : 1; 
        unsigned int tcpiTxbytes : 1; 
        unsigned int tcpiTxpackets : 1; 
        unsigned int tcpiTxretransmitbytes : 1; 
        unsigned int tcpiTxunacked : 1; 
        unsigned int tcpiWifiRxbytes : 1; 
        unsigned int tcpiWifiRxpackets : 1; 
        unsigned int tcpiWifiTxbytes : 1; 
        unsigned int tcpiWifiTxpackets : 1; 
        unsigned int tcpiFlags : 1; 
        unsigned int tcpiLastOutif : 1; 
        unsigned int tcpiOptions : 1; 
        unsigned int tcpiRcvMss : 1; 
        unsigned int tcpiRcvNxt : 1; 
        unsigned int tcpiRcvSpace : 1; 
        unsigned int tcpiRcvWscale : 1; 
        unsigned int tcpiRto : 1; 
        unsigned int tcpiRttbest : 1; 
        unsigned int tcpiRttcur : 1; 
        unsigned int tcpiRttvar : 1; 
        unsigned int tcpiSndCwnd : 1; 
        unsigned int tcpiSndMss : 1; 
        unsigned int tcpiSndNxt : 1; 
        unsigned int tcpiSndSbbytes : 1; 
        unsigned int tcpiSndSsthresh : 1; 
        unsigned int tcpiSndWnd : 1; 
        unsigned int tcpiSndWscale : 1; 
        unsigned int tcpiSrtt : 1; 
        unsigned int tcpiState : 1; 
        unsigned int tcpiSynrexmits : 1; 
        unsigned int tcpiUnused1 : 1; 
        unsigned int tcpiUnused2 : 1; 
    } _has;
}

@property BOOL hasTcpiState;
@property unsigned int tcpiState;
@property BOOL hasTcpiOptions;
@property unsigned int tcpiOptions;
@property BOOL hasTcpiSndWscale;
@property unsigned int tcpiSndWscale;
@property BOOL hasTcpiRcvWscale;
@property unsigned int tcpiRcvWscale;
@property BOOL hasTcpiFlags;
@property unsigned int tcpiFlags;
@property BOOL hasTcpiRto;
@property unsigned int tcpiRto;
@property BOOL hasTcpiSndMss;
@property unsigned int tcpiSndMss;
@property BOOL hasTcpiRcvMss;
@property unsigned int tcpiRcvMss;
@property BOOL hasTcpiRttcur;
@property unsigned int tcpiRttcur;
@property BOOL hasTcpiSrtt;
@property unsigned int tcpiSrtt;
@property BOOL hasTcpiRttvar;
@property unsigned int tcpiRttvar;
@property BOOL hasTcpiRttbest;
@property unsigned int tcpiRttbest;
@property BOOL hasTcpiSndSsthresh;
@property unsigned int tcpiSndSsthresh;
@property BOOL hasTcpiSndCwnd;
@property unsigned int tcpiSndCwnd;
@property BOOL hasTcpiRcvSpace;
@property unsigned int tcpiRcvSpace;
@property BOOL hasTcpiSndWnd;
@property unsigned int tcpiSndWnd;
@property BOOL hasTcpiSndNxt;
@property unsigned int tcpiSndNxt;
@property BOOL hasTcpiRcvNxt;
@property unsigned int tcpiRcvNxt;
@property BOOL hasTcpiLastOutif;
@property int tcpiLastOutif;
@property BOOL hasTcpiSndSbbytes;
@property unsigned int tcpiSndSbbytes;
@property BOOL hasTcpiTxpackets;
@property unsigned long long tcpiTxpackets;
@property BOOL hasTcpiTxbytes;
@property unsigned long long tcpiTxbytes;
@property BOOL hasTcpiTxretransmitbytes;
@property unsigned long long tcpiTxretransmitbytes;
@property BOOL hasTcpiTxunacked;
@property unsigned long long tcpiTxunacked;
@property BOOL hasTcpiRxpackets;
@property unsigned long long tcpiRxpackets;
@property BOOL hasTcpiRxbytes;
@property unsigned long long tcpiRxbytes;
@property BOOL hasTcpiRxduplicatebytes;
@property unsigned long long tcpiRxduplicatebytes;
@property BOOL hasTcpiRxoutoforderbytes;
@property unsigned long long tcpiRxoutoforderbytes;
@property BOOL hasTcpiSndBw;
@property unsigned long long tcpiSndBw;
@property BOOL hasTcpiSynrexmits;
@property int tcpiSynrexmits;
@property BOOL hasTcpiUnused1;
@property int tcpiUnused1;
@property BOOL hasTcpiUnused2;
@property unsigned int tcpiUnused2;
@property BOOL hasTcpiCellRxpackets;
@property unsigned long long tcpiCellRxpackets;
@property BOOL hasTcpiCellRxbytes;
@property unsigned long long tcpiCellRxbytes;
@property BOOL hasTcpiCellTxpackets;
@property unsigned long long tcpiCellTxpackets;
@property BOOL hasTcpiCellTxbytes;
@property unsigned long long tcpiCellTxbytes;
@property BOOL hasTcpiWifiRxpackets;
@property unsigned long long tcpiWifiRxpackets;
@property BOOL hasTcpiWifiRxbytes;
@property unsigned long long tcpiWifiRxbytes;
@property BOOL hasTcpiWifiTxpackets;
@property unsigned long long tcpiWifiTxpackets;
@property BOOL hasTcpiWifiTxbytes;
@property unsigned long long tcpiWifiTxbytes;


- (unsigned long long)tcpiWifiTxbytes;
- (unsigned long long)tcpiWifiTxpackets;
- (unsigned long long)tcpiWifiRxbytes;
- (unsigned long long)tcpiWifiRxpackets;
- (unsigned long long)tcpiCellTxbytes;
- (unsigned long long)tcpiCellTxpackets;
- (unsigned long long)tcpiCellRxbytes;
- (unsigned long long)tcpiCellRxpackets;
- (unsigned int)tcpiUnused2;
- (int)tcpiUnused1;
- (int)tcpiSynrexmits;
- (unsigned long long)tcpiSndBw;
- (unsigned long long)tcpiRxoutoforderbytes;
- (unsigned long long)tcpiRxduplicatebytes;
- (unsigned long long)tcpiRxbytes;
- (unsigned long long)tcpiRxpackets;
- (unsigned long long)tcpiTxunacked;
- (unsigned long long)tcpiTxretransmitbytes;
- (unsigned long long)tcpiTxbytes;
- (unsigned long long)tcpiTxpackets;
- (unsigned int)tcpiSndSbbytes;
- (int)tcpiLastOutif;
- (unsigned int)tcpiRcvNxt;
- (unsigned int)tcpiSndNxt;
- (unsigned int)tcpiSndWnd;
- (unsigned int)tcpiRcvSpace;
- (unsigned int)tcpiSndCwnd;
- (unsigned int)tcpiSndSsthresh;
- (unsigned int)tcpiRttbest;
- (unsigned int)tcpiRttvar;
- (unsigned int)tcpiSrtt;
- (unsigned int)tcpiRttcur;
- (unsigned int)tcpiRcvMss;
- (unsigned int)tcpiSndMss;
- (unsigned int)tcpiRto;
- (unsigned int)tcpiFlags;
- (unsigned int)tcpiRcvWscale;
- (unsigned int)tcpiSndWscale;
- (unsigned int)tcpiOptions;
- (unsigned int)tcpiState;
- (BOOL)hasTcpiWifiTxbytes;
- (void)setHasTcpiWifiTxbytes:(BOOL)arg1;
- (void)setTcpiWifiTxbytes:(unsigned long long)arg1;
- (BOOL)hasTcpiWifiTxpackets;
- (void)setHasTcpiWifiTxpackets:(BOOL)arg1;
- (void)setTcpiWifiTxpackets:(unsigned long long)arg1;
- (BOOL)hasTcpiWifiRxbytes;
- (void)setHasTcpiWifiRxbytes:(BOOL)arg1;
- (void)setTcpiWifiRxbytes:(unsigned long long)arg1;
- (BOOL)hasTcpiWifiRxpackets;
- (void)setHasTcpiWifiRxpackets:(BOOL)arg1;
- (void)setTcpiWifiRxpackets:(unsigned long long)arg1;
- (BOOL)hasTcpiCellTxbytes;
- (void)setHasTcpiCellTxbytes:(BOOL)arg1;
- (void)setTcpiCellTxbytes:(unsigned long long)arg1;
- (BOOL)hasTcpiCellTxpackets;
- (void)setHasTcpiCellTxpackets:(BOOL)arg1;
- (void)setTcpiCellTxpackets:(unsigned long long)arg1;
- (BOOL)hasTcpiCellRxbytes;
- (void)setHasTcpiCellRxbytes:(BOOL)arg1;
- (void)setTcpiCellRxbytes:(unsigned long long)arg1;
- (BOOL)hasTcpiCellRxpackets;
- (void)setHasTcpiCellRxpackets:(BOOL)arg1;
- (void)setTcpiCellRxpackets:(unsigned long long)arg1;
- (BOOL)hasTcpiUnused2;
- (void)setHasTcpiUnused2:(BOOL)arg1;
- (void)setTcpiUnused2:(unsigned int)arg1;
- (BOOL)hasTcpiUnused1;
- (void)setHasTcpiUnused1:(BOOL)arg1;
- (void)setTcpiUnused1:(int)arg1;
- (BOOL)hasTcpiSynrexmits;
- (void)setHasTcpiSynrexmits:(BOOL)arg1;
- (void)setTcpiSynrexmits:(int)arg1;
- (BOOL)hasTcpiSndBw;
- (void)setHasTcpiSndBw:(BOOL)arg1;
- (void)setTcpiSndBw:(unsigned long long)arg1;
- (BOOL)hasTcpiRxoutoforderbytes;
- (void)setHasTcpiRxoutoforderbytes:(BOOL)arg1;
- (void)setTcpiRxoutoforderbytes:(unsigned long long)arg1;
- (BOOL)hasTcpiRxduplicatebytes;
- (void)setHasTcpiRxduplicatebytes:(BOOL)arg1;
- (void)setTcpiRxduplicatebytes:(unsigned long long)arg1;
- (BOOL)hasTcpiRxbytes;
- (void)setHasTcpiRxbytes:(BOOL)arg1;
- (void)setTcpiRxbytes:(unsigned long long)arg1;
- (BOOL)hasTcpiRxpackets;
- (void)setHasTcpiRxpackets:(BOOL)arg1;
- (void)setTcpiRxpackets:(unsigned long long)arg1;
- (BOOL)hasTcpiTxunacked;
- (void)setHasTcpiTxunacked:(BOOL)arg1;
- (void)setTcpiTxunacked:(unsigned long long)arg1;
- (BOOL)hasTcpiTxretransmitbytes;
- (void)setHasTcpiTxretransmitbytes:(BOOL)arg1;
- (void)setTcpiTxretransmitbytes:(unsigned long long)arg1;
- (BOOL)hasTcpiTxbytes;
- (void)setHasTcpiTxbytes:(BOOL)arg1;
- (void)setTcpiTxbytes:(unsigned long long)arg1;
- (BOOL)hasTcpiTxpackets;
- (void)setHasTcpiTxpackets:(BOOL)arg1;
- (void)setTcpiTxpackets:(unsigned long long)arg1;
- (BOOL)hasTcpiSndSbbytes;
- (void)setHasTcpiSndSbbytes:(BOOL)arg1;
- (void)setTcpiSndSbbytes:(unsigned int)arg1;
- (BOOL)hasTcpiLastOutif;
- (void)setHasTcpiLastOutif:(BOOL)arg1;
- (void)setTcpiLastOutif:(int)arg1;
- (BOOL)hasTcpiRcvNxt;
- (void)setHasTcpiRcvNxt:(BOOL)arg1;
- (void)setTcpiRcvNxt:(unsigned int)arg1;
- (BOOL)hasTcpiSndNxt;
- (void)setHasTcpiSndNxt:(BOOL)arg1;
- (void)setTcpiSndNxt:(unsigned int)arg1;
- (BOOL)hasTcpiSndWnd;
- (void)setHasTcpiSndWnd:(BOOL)arg1;
- (void)setTcpiSndWnd:(unsigned int)arg1;
- (BOOL)hasTcpiRcvSpace;
- (void)setHasTcpiRcvSpace:(BOOL)arg1;
- (void)setTcpiRcvSpace:(unsigned int)arg1;
- (BOOL)hasTcpiSndCwnd;
- (void)setHasTcpiSndCwnd:(BOOL)arg1;
- (void)setTcpiSndCwnd:(unsigned int)arg1;
- (BOOL)hasTcpiSndSsthresh;
- (void)setHasTcpiSndSsthresh:(BOOL)arg1;
- (void)setTcpiSndSsthresh:(unsigned int)arg1;
- (BOOL)hasTcpiRttbest;
- (void)setHasTcpiRttbest:(BOOL)arg1;
- (void)setTcpiRttbest:(unsigned int)arg1;
- (BOOL)hasTcpiRttvar;
- (void)setHasTcpiRttvar:(BOOL)arg1;
- (void)setTcpiRttvar:(unsigned int)arg1;
- (BOOL)hasTcpiSrtt;
- (void)setHasTcpiSrtt:(BOOL)arg1;
- (void)setTcpiSrtt:(unsigned int)arg1;
- (BOOL)hasTcpiRttcur;
- (void)setHasTcpiRttcur:(BOOL)arg1;
- (void)setTcpiRttcur:(unsigned int)arg1;
- (BOOL)hasTcpiRcvMss;
- (void)setHasTcpiRcvMss:(BOOL)arg1;
- (void)setTcpiRcvMss:(unsigned int)arg1;
- (BOOL)hasTcpiSndMss;
- (void)setHasTcpiSndMss:(BOOL)arg1;
- (void)setTcpiSndMss:(unsigned int)arg1;
- (BOOL)hasTcpiRto;
- (void)setHasTcpiRto:(BOOL)arg1;
- (void)setTcpiRto:(unsigned int)arg1;
- (BOOL)hasTcpiFlags;
- (void)setHasTcpiFlags:(BOOL)arg1;
- (void)setTcpiFlags:(unsigned int)arg1;
- (BOOL)hasTcpiRcvWscale;
- (void)setHasTcpiRcvWscale:(BOOL)arg1;
- (void)setTcpiRcvWscale:(unsigned int)arg1;
- (BOOL)hasTcpiSndWscale;
- (void)setHasTcpiSndWscale:(BOOL)arg1;
- (void)setTcpiSndWscale:(unsigned int)arg1;
- (BOOL)hasTcpiOptions;
- (void)setHasTcpiOptions:(BOOL)arg1;
- (void)setTcpiOptions:(unsigned int)arg1;
- (BOOL)hasTcpiState;
- (void)setHasTcpiState:(BOOL)arg1;
- (void)setTcpiState:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
