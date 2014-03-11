/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAStep : PBCodable <NSCopying> {
    struct { 
        unsigned int expectedTime : 1; 
        unsigned int stepID : 1; 
        unsigned int zilchPointIndex : 1; 
    unsigned int _expectedTime;
    } _has;
    unsigned int _stepID;
    int _zilchPointIndex;
}

@property unsigned int expectedTime;
@property BOOL hasExpectedTime;
@property BOOL hasStepID;
@property BOOL hasZilchPointIndex;
@property unsigned int stepID;
@property int zilchPointIndex;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)expectedTime;
- (BOOL)hasExpectedTime;
- (BOOL)hasStepID;
- (BOOL)hasZilchPointIndex;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setExpectedTime:(unsigned int)arg1;
- (void)setHasExpectedTime:(BOOL)arg1;
- (void)setHasStepID:(BOOL)arg1;
- (void)setHasZilchPointIndex:(BOOL)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setZilchPointIndex:(int)arg1;
- (unsigned int)stepID;
- (void)writeTo:(id)arg1;
- (int)zilchPointIndex;

@end
