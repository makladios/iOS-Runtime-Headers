/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSNumber, NSString, RadioArtworkCollection;

@interface _MPRadioStreamMetadata : NSObject {
    NSString *_album;
    NSString *_albumBuyButtonText;
    int _albumBuyButtonType;
    NSString *_artist;
    RadioArtworkCollection *_artworkCollection;
    NSNumber *_explicit;
    NSString *_title;
}

@property(copy) NSString * album;
@property(copy) NSString * albumBuyButtonText;
@property int albumBuyButtonType;
@property(copy) NSString * artist;
@property(retain) RadioArtworkCollection * artworkCollection;
@property(getter=isExplicit) NSNumber * explicit;
@property(copy) NSString * title;

- (void).cxx_destruct;
- (id)album;
- (id)albumBuyButtonText;
- (int)albumBuyButtonType;
- (id)artist;
- (id)artworkCollection;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)isExplicit;
- (void)setAlbum:(id)arg1;
- (void)setAlbumBuyButtonText:(id)arg1;
- (void)setAlbumBuyButtonType:(int)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtworkCollection:(id)arg1;
- (void)setExplicit:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
