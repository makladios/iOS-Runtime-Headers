/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDProtobufWifi.dylib
 */

@interface AWDWiFiMetricsManagerWatchdogEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int available : 1; 
        unsigned int deviceIdentifierMap : 1; 
        unsigned int flags : 1; 
        unsigned int reason : 1; 
        unsigned int subreason : 1; 
        unsigned int version : 1; 
    int _available;
    unsigned int _deviceIdentifierMap;
    unsigned int _flags;
    } _has;
    int _reason;
    unsigned int _subreason;
    unsigned long long _timestamp;
    unsigned int _version;
}

@property int available;
@property unsigned int deviceIdentifierMap;
@property unsigned int flags;
@property BOOL hasAvailable;
@property BOOL hasDeviceIdentifierMap;
@property BOOL hasFlags;
@property BOOL hasReason;
@property BOOL hasSubreason;
@property BOOL hasTimestamp;
@property BOOL hasVersion;
@property int reason;
@property unsigned int subreason;
@property unsigned long long timestamp;
@property unsigned int version;

- (int)available;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)deviceIdentifierMap;
- (id)dictionaryRepresentation;
- (unsigned int)flags;
- (BOOL)hasAvailable;
- (BOOL)hasDeviceIdentifierMap;
- (BOOL)hasFlags;
- (BOOL)hasReason;
- (BOOL)hasSubreason;
- (BOOL)hasTimestamp;
- (BOOL)hasVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)reason;
- (void)setAvailable:(int)arg1;
- (void)setDeviceIdentifierMap:(unsigned int)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHasAvailable:(BOOL)arg1;
- (void)setHasDeviceIdentifierMap:(BOOL)arg1;
- (void)setHasFlags:(BOOL)arg1;
- (void)setHasReason:(BOOL)arg1;
- (void)setHasSubreason:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasVersion:(BOOL)arg1;
- (void)setReason:(int)arg1;
- (void)setSubreason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)subreason;
- (unsigned long long)timestamp;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
