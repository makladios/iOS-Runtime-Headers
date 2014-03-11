/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class UIColor;

@interface SBUIEmergencyCallServiceViewController : UIViewController <SBUIEmergencyCallServiceInterface> {
    int _backgroundStyle;
    UIColor *_tintColor;
}

@property int backgroundStyle;
@property(readonly) UIColor * tintColor;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)backgroundStyle:(id)arg1;
- (int)backgroundStyle;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)noteTintColorForBackgroundStyleChanged:(id)arg1;
- (void)setBackgroundStyle:(int)arg1;
- (id)tintColor;

@end
