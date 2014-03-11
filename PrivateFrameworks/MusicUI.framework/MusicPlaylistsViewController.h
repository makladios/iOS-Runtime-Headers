/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSCache, UIAlertView, UITextField;

@interface MusicPlaylistsViewController : MusicTableViewController <MusicPickerOverlayDelegate, UITextFieldDelegate> {
    UITextField *_newPlaylistAlertTextField;
    id _newPlaylistAlertTextFieldChangeObserver;
    UIAlertView *_newPlaylistAlertView;
    NSCache *_playlistMetadataCache;
}

@property(retain) NSCache * playlistMetadataCache;

- (void).cxx_destruct;
- (BOOL)MPH_supportsCoverFlow;
- (BOOL)_isSaveButtonEnabled;
- (id)_playlistTitle;
- (void)_updateCloudPlaylist:(id)arg1;
- (void)_updateSaveButtonEnabledState;
- (void)addPlaylistAction;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)createGeniusPlaylistAction;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (BOOL)music_hasContent;
- (void)pickerOverlayDidFinish:(id)arg1;
- (void)pickerOverlayRequestsFinish:(id)arg1;
- (id)playlistMetadataCache;
- (void)reloadData;
- (void)setPlaylistMetadataCache:(id)arg1;
- (void)switchToShortcutIdentifier:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end
