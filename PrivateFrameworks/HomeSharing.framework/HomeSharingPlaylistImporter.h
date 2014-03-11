/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class ML3DatabaseConnection, ML3MusicLibrary, NSData;

@interface HomeSharingPlaylistImporter : NSData {
    unsigned int _basePlaylistContainerId;
    ML3DatabaseConnection *_connection;
    ML3MusicLibrary *_library;
    NSData *_playlistData;
}

- (BOOL)executeUpdateSQL:(id)arg1;
- (BOOL)importPlaylistData;
- (id)initWithData:(id)arg1 basePlaylistContainerId:(unsigned int)arg2 library:(id)arg3 connection:(id)arg4;

@end
