/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftResponse : PBCodable <NSCopying> {
    struct { 
        double _x; 
        double _y; 
        int _z; 
        struct { 
            unsigned int z : 1; 
        } _has; 
    } _shiftedPixel;
}

@property(readonly) struct { double x1; double x2; } shiftedCoordinate;
@property struct { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; } x4; } shiftedPixel;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setShiftedPixel:(struct { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; } x4; })arg1;
- (struct { double x1; double x2; })shiftedCoordinate;
- (struct { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; } x4; })shiftedPixel;
- (void)writeTo:(id)arg1;

@end
