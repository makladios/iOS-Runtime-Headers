/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSNull : NSObject <NSCopying, NSSecureCoding, TSDPathPainter, TSDMixing> {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)null;
+ (BOOL)supportsSecureCoding;

- (id)CAMLType;
- (unsigned long)_cfTypeID;
- (void)appendJsonStringToString:(id)arg1;
- (void)appendJsonStringToString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (oneway void)release;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (id)valueForKey:(id)arg1;

@end
