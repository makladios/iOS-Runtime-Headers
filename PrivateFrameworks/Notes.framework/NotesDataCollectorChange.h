/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NSString;

@interface NotesDataCollectorChange : NSObject {
    NSString *_accountIdentifier;
    int _accountType;
    int _entity;
    int _operation;
}

@property(copy) NSString * accountIdentifier;
@property int accountType;
@property int entity;
@property int operation;

+ (id)changeForEntity:(int)arg1 operation:(int)arg2 account:(id)arg3;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (int)accountType;
- (int)entity;
- (int)operation;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountType:(int)arg1;
- (void)setEntity:(int)arg1;
- (void)setOperation:(int)arg1;

@end
