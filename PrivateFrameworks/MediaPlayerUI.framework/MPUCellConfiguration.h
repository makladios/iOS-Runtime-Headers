/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUCellConfiguration : NSObject {
}

+ (void)configureCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned int)arg4 animated:(BOOL)arg5;
+ (void)configureCellAfterDeceleration:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned int)arg4 animated:(BOOL)arg5;
+ (void)configureDownloadStatusForCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned int)arg4 animated:(BOOL)arg5;
+ (void)configureView:(id)arg1 asynchronously:(BOOL)arg2 forEntity:(id)arg3 withBlock:(id)arg4;
+ (void)didEndDisplayingCell:(id)arg1 withViewController:(id)arg2 atIndex:(unsigned int)arg3;
+ (float)expandedTableViewCellHeight;
+ (void)handleScrollViewDidEndDeceleratingForCell:(id)arg1 viewController:(id)arg2;
+ (void)handleScrollViewDidScrollForCell:(id)arg1 viewController:(id)arg2;
+ (id)mediaEntityPropertiesToFetch;
+ (id)reuseIdentifier;
+ (id)tableViewBackgroundColor;
+ (id)tableViewCellBackgroundColor;
+ (Class)tableViewCellClass;
+ (float)tableViewCellHeight;
+ (id)tableViewSeparatorColor;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })tableViewSeparatorInset;
+ (int)tableViewSeparatorStyle;
+ (BOOL)wantsScrollViewDidEndDecelerating;
+ (BOOL)wantsScrollViewDidScroll;
+ (void)willDisplayCell:(id)arg1 withViewController:(id)arg2 atIndex:(unsigned int)arg3;

@end
