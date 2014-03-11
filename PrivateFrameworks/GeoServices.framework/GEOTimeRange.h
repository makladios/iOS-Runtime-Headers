/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTimeRange : PBCodable <NSCopying> {
    struct { 
        unsigned int from : 1; 
        unsigned int to : 1; 
        unsigned int allDay : 1; 
    BOOL _allDay;
    unsigned int _from;
    } _has;
    unsigned int _to;
}

@property BOOL allDay;
@property unsigned int from;
@property BOOL hasAllDay;
@property BOOL hasFrom;
@property BOOL hasTo;
@property unsigned int to;

- (BOOL)allDay;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)from;
- (BOOL)hasAllDay;
- (BOOL)hasFrom;
- (BOOL)hasTo;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAllDay:(BOOL)arg1;
- (void)setFrom:(unsigned int)arg1;
- (void)setHasAllDay:(BOOL)arg1;
- (void)setHasFrom:(BOOL)arg1;
- (void)setHasTo:(BOOL)arg1;
- (void)setTo:(unsigned int)arg1;
- (unsigned int)to;
- (void)writeTo:(id)arg1;

@end
