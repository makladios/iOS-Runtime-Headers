/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UITableViewCell, UITextView;

@interface EKEventNotesDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    BOOL _cellNeedsUpdate;
    UITableViewCell *_moreButtonCell;
    UITextView *_notesView;
}

- (void).cxx_destruct;
- (void)_updateCellIfNeeded;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfSubitems;
- (void)reset;
- (void)setCellPosition:(int)arg1;

@end
