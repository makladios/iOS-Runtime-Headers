/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSSPropertyMap, TSWPListStyle;

@interface TSWPListStyleCommand : TSWPTextCommand {
    TSWPListStyle *_listStyle;
    TSSPropertyMap *_propertyMap;
}

- (id)actionString;
- (void)dealloc;
- (void)doCommit;
- (void)doUndoRedo;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 listStyle:(id)arg3 createVariationUsingPropertyMap:(id)arg4;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 listStyle:(id)arg3;
- (int)persistenceKind;

@end
