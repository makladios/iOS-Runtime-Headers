/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSDateComponents, NSTimeZone, PreferencesTwoPartValueCell, UIDatePicker, UITableViewCell;

@interface EKEventDateEditItem : EKEventEditItem <EKTimeZoneViewControllerDelegate, EKCellShortener> {
    BOOL _allDay;
    UITableViewCell *_allDayCell;
    BOOL _changingDate;
    NSDateComponents *_endComponents;
    PreferencesTwoPartValueCell *_endDateCell;
    UIDatePicker *_endDatePicker;
    UITableViewCell *_endDatePickerCell;
    BOOL _endTimeWasMessedUp;
    int _selectedSubitem;
    int _shorteningStatus;
    BOOL _showsAllDay;
    NSDateComponents *_startComponents;
    PreferencesTwoPartValueCell *_startDateCell;
    UIDatePicker *_startDatePicker;
    UITableViewCell *_startDatePickerCell;
    BOOL _supportsTimeZone;
    NSTimeZone *_timeZone;
    UITableViewCell *_timeZoneCell;
}

@property BOOL showsAllDay;
@property BOOL supportsTimeZone;

- (void).cxx_destruct;
- (id)_allDayCell;
- (void)_allDayChanged:(id)arg1;
- (id)_calendarForEventComponents;
- (id)_dateComponentsInSystemCalendarFromDate:(id)arg1;
- (id)_dateInSystemCalendarFromComponents:(id)arg1;
- (void)_datePickerChanged:(id)arg1;
- (void)_datePickerDoubleTapped:(id)arg1;
- (id)_endDateCell;
- (BOOL)_endDateIsBeforeStartDate;
- (id)_endDatePickerCell;
- (void)_hideDatePicker;
- (id)_newDatePicker;
- (void)_pickNextReasonableTime;
- (void)_resetStartString:(BOOL)arg1 endString:(BOOL)arg2;
- (int)_rowForSubitem:(int)arg1;
- (void)_setAllDay:(BOOL)arg1;
- (void)_setEndDate:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (void)_setTimeZone:(id)arg1;
- (BOOL)_shouldShowTimeZone;
- (id)_startDateCell;
- (id)_startDatePickerCell;
- (int)_subitemForRow:(int)arg1;
- (id)_timeZoneCell;
- (id)_timeZoneDescription;
- (void)_updateDateColors;
- (void)_updateDatePickerAnimated:(BOOL)arg1;
- (void)_updateTimeWidths;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2 forWidth:(float)arg3;
- (id)description;
- (BOOL)editor:(id)arg1 canSelectSubitem:(unsigned int)arg2 inSubsection:(unsigned int)arg3;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned int)arg2 inSubsection:(unsigned int)arg3;
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;
- (void)endInlineEditing;
- (id)init;
- (BOOL)isInline;
- (unsigned int)numberOfSubitemsInSubsection:(unsigned int)arg1;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)requiresReconfigurationOnCommit;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (void)setShowsAllDay:(BOOL)arg1;
- (void)setSupportsTimeZone:(BOOL)arg1;
- (void)shortenCell:(id)arg1;
- (BOOL)showsAllDay;
- (BOOL)supportsTimeZone;
- (void)timeZoneViewController:(id)arg1 didSelectTimeZone:(id)arg2;
- (void)timeZoneViewControllerDidCancel:(id)arg1;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned int)arg1 inSubsection:(unsigned int)arg2;

@end
