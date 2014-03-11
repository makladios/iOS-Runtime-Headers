/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDProtobufWifi.dylib
 */

@class NSMutableArray;

@interface AWDWiFiMetricNetworkPrefs : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int adhocNetsCount : 1; 
        unsigned int applePersHotspotNetsCount : 1; 
        unsigned int atjCanceledCount : 1; 
        unsigned int atjUsedCount : 1; 
        unsigned int captiveNetsCount : 1; 
        unsigned int eapNetsCount : 1; 
        unsigned int hiddenNetsCount : 1; 
        unsigned int mostUsedCount : 1; 
        unsigned int openNonCaptiveNetsCount : 1; 
        unsigned int prefNetsCount : 1; 
        unsigned int wapiNetsCount : 1; 
        unsigned int wepNetsCount : 1; 
        unsigned int wpaNetsCount : 1; 
        unsigned int atjEnabled : 1; 
    unsigned int _adhocNetsCount;
    unsigned int _applePersHotspotNetsCount;
    unsigned int _atjCanceledCount;
    BOOL _atjEnabled;
    unsigned int _atjUsedCount;
    unsigned int _captiveNetsCount;
    unsigned int _eapNetsCount;
    } _has;
    unsigned int _hiddenNetsCount;
    unsigned int _mostUsedCount;
    NSMutableArray *_mostUsedNetworks;
    unsigned int _openNonCaptiveNetsCount;
    unsigned int _prefNetsCount;
    unsigned long long _timestamp;
    unsigned int _wapiNetsCount;
    unsigned int _wepNetsCount;
    unsigned int _wpaNetsCount;
}

@property unsigned int adhocNetsCount;
@property unsigned int applePersHotspotNetsCount;
@property unsigned int atjCanceledCount;
@property BOOL atjEnabled;
@property unsigned int atjUsedCount;
@property unsigned int captiveNetsCount;
@property unsigned int eapNetsCount;
@property BOOL hasAdhocNetsCount;
@property BOOL hasApplePersHotspotNetsCount;
@property BOOL hasAtjCanceledCount;
@property BOOL hasAtjEnabled;
@property BOOL hasAtjUsedCount;
@property BOOL hasCaptiveNetsCount;
@property BOOL hasEapNetsCount;
@property BOOL hasHiddenNetsCount;
@property BOOL hasMostUsedCount;
@property BOOL hasOpenNonCaptiveNetsCount;
@property BOOL hasPrefNetsCount;
@property BOOL hasTimestamp;
@property BOOL hasWapiNetsCount;
@property BOOL hasWepNetsCount;
@property BOOL hasWpaNetsCount;
@property unsigned int hiddenNetsCount;
@property unsigned int mostUsedCount;
@property(retain) NSMutableArray * mostUsedNetworks;
@property unsigned int openNonCaptiveNetsCount;
@property unsigned int prefNetsCount;
@property unsigned long long timestamp;
@property unsigned int wapiNetsCount;
@property unsigned int wepNetsCount;
@property unsigned int wpaNetsCount;

- (void)addMostUsedNetworks:(id)arg1;
- (unsigned int)adhocNetsCount;
- (unsigned int)applePersHotspotNetsCount;
- (unsigned int)atjCanceledCount;
- (BOOL)atjEnabled;
- (unsigned int)atjUsedCount;
- (unsigned int)captiveNetsCount;
- (void)clearMostUsedNetworks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eapNetsCount;
- (BOOL)hasAdhocNetsCount;
- (BOOL)hasApplePersHotspotNetsCount;
- (BOOL)hasAtjCanceledCount;
- (BOOL)hasAtjEnabled;
- (BOOL)hasAtjUsedCount;
- (BOOL)hasCaptiveNetsCount;
- (BOOL)hasEapNetsCount;
- (BOOL)hasHiddenNetsCount;
- (BOOL)hasMostUsedCount;
- (BOOL)hasOpenNonCaptiveNetsCount;
- (BOOL)hasPrefNetsCount;
- (BOOL)hasTimestamp;
- (BOOL)hasWapiNetsCount;
- (BOOL)hasWepNetsCount;
- (BOOL)hasWpaNetsCount;
- (unsigned int)hash;
- (unsigned int)hiddenNetsCount;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)mostUsedCount;
- (id)mostUsedNetworks;
- (id)mostUsedNetworksAtIndex:(unsigned int)arg1;
- (unsigned int)mostUsedNetworksCount;
- (unsigned int)openNonCaptiveNetsCount;
- (unsigned int)prefNetsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setAdhocNetsCount:(unsigned int)arg1;
- (void)setApplePersHotspotNetsCount:(unsigned int)arg1;
- (void)setAtjCanceledCount:(unsigned int)arg1;
- (void)setAtjEnabled:(BOOL)arg1;
- (void)setAtjUsedCount:(unsigned int)arg1;
- (void)setCaptiveNetsCount:(unsigned int)arg1;
- (void)setEapNetsCount:(unsigned int)arg1;
- (void)setHasAdhocNetsCount:(BOOL)arg1;
- (void)setHasApplePersHotspotNetsCount:(BOOL)arg1;
- (void)setHasAtjCanceledCount:(BOOL)arg1;
- (void)setHasAtjEnabled:(BOOL)arg1;
- (void)setHasAtjUsedCount:(BOOL)arg1;
- (void)setHasCaptiveNetsCount:(BOOL)arg1;
- (void)setHasEapNetsCount:(BOOL)arg1;
- (void)setHasHiddenNetsCount:(BOOL)arg1;
- (void)setHasMostUsedCount:(BOOL)arg1;
- (void)setHasOpenNonCaptiveNetsCount:(BOOL)arg1;
- (void)setHasPrefNetsCount:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasWapiNetsCount:(BOOL)arg1;
- (void)setHasWepNetsCount:(BOOL)arg1;
- (void)setHasWpaNetsCount:(BOOL)arg1;
- (void)setHiddenNetsCount:(unsigned int)arg1;
- (void)setMostUsedCount:(unsigned int)arg1;
- (void)setMostUsedNetworks:(id)arg1;
- (void)setOpenNonCaptiveNetsCount:(unsigned int)arg1;
- (void)setPrefNetsCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWapiNetsCount:(unsigned int)arg1;
- (void)setWepNetsCount:(unsigned int)arg1;
- (void)setWpaNetsCount:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)wapiNetsCount;
- (unsigned int)wepNetsCount;
- (unsigned int)wpaNetsCount;
- (void)writeTo:(id)arg1;

@end
