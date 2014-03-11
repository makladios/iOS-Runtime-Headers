/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSData;

@interface VKPTextureAtlas : PBCodable <NSCopying> {
    unsigned int _quadHeight;
    unsigned int _quadWidth;
    NSData *_texture;
}

@property unsigned int quadHeight;
@property unsigned int quadWidth;
@property(retain) NSData * texture;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)quadHeight;
- (unsigned int)quadWidth;
- (BOOL)readFrom:(id)arg1;
- (void)setQuadHeight:(unsigned int)arg1;
- (void)setQuadWidth:(unsigned int)arg1;
- (void)setTexture:(id)arg1;
- (id)texture;
- (void)writeTo:(id)arg1;

@end
