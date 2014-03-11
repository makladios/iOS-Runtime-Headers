/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKMessage>, <CKTranscriptDataRowObject>, NSString;

@interface CKTranscriptDataRow : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    NSString *_guid;
    BOOL _hasTail;
    <CKMessage> *_message;
    <CKTranscriptDataRowObject> *_object;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property(readonly) NSString * guid;
@property BOOL hasTail;
@property(retain) <CKMessage> * message;
@property(retain) <CKTranscriptDataRowObject> * object;

+ (void)contentSizeCategoryDidChange:(id)arg1;
+ (id)rowAttributes;
+ (id)rowWithObject:(id)arg1 forMessage:(id)arg2;

- (id)attributeForKey:(id)arg1;
- (id)attributedTimestamp;
- (Class)cellClass;
- (id)cellIdentifier;
- (id)contactImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentAlignmentInsets;
- (void)dealloc;
- (id)description;
- (BOOL)displayDuringSend;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)guid;
- (BOOL)hasTail;
- (id)initWithObject:(id)arg1 forMessage:(id)arg2;
- (BOOL)isEditable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTypingIndicator;
- (id)message;
- (id)object;
- (void)prewarmForDisplay;
- (void)removeAttributeForKey:(id)arg1;
- (void)removeAttributes;
- (void)removeSize;
- (id)rowAttributes;
- (id)rowSize;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHasTail:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setObject:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textAlignmentInsets;
- (BOOL)transcriptOrientation;
- (BOOL)transcriptUsesTextAlignmentInsets;
- (BOOL)wantsContactImageLayout;
- (BOOL)wantsDrawerLayout;
- (BOOL)wantsPrewarmForDisplay;

@end
