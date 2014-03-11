/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@class ACAccount, NSSet, NSString, UILabel;

@interface ACUIAccountSummaryCell : PSTableCell {
    ACAccount *_account;
    UILabel *_dataclassesLabel;
    NSString *_desiredValue;
    NSSet *_enabledDataclasses;
    int _style;
    NSSet *_supportedDataclasses;
    BOOL _useCustomDetailsText;
}

+ (void)_configureSpecifier:(id)arg1 forAccount:(id)arg2 withStyle:(int)arg3 valueText:(id)arg4;
+ (id)_nameForAccountSpecifier:(id)arg1 withStyle:(int)arg2;
+ (id)_valueForCellSpecifier:(id)arg1;
+ (id)specifierWithStyle:(int)arg1 account:(id)arg2 detailControllerClass:(Class)arg3 presentationStyle:(int)arg4;
+ (id)specifierWithStyle:(int)arg1 account:(id)arg2 target:(id)arg3 controllerLoadAction:(SEL)arg4;
+ (id)specifierWithStyle:(int)arg1 account:(id)arg2 valueText:(id)arg3 detailControllerClass:(Class)arg4 presentationStyle:(int)arg5;

- (void).cxx_destruct;
- (id)_dataclassesLabel;
- (id)_enabledDataclassesTextForWidth:(float)arg1;
- (id)_font;
- (id)_numberFormatter;
- (void)hideDataclass:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;

@end
