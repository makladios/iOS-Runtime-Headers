/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UITableViewCell;

@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate> {
    unsigned int _showsLocation : 1;
    UITableViewCell *_locationCell;
    BOOL _locationModified;
    UITableViewCell *_titleCell;
}

- (void).cxx_destruct;
- (id)_makeCell:(unsigned int)arg1;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned int)arg2 inSubsection:(unsigned int)arg3;
- (id)cellForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2 forWidth:(float)arg3;
- (id)init;
- (id)initWithLocation:(BOOL)arg1;
- (BOOL)isInline;
- (unsigned int)numberOfSubitemsInSubsection:(unsigned int)arg1;
- (void)reset;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end
