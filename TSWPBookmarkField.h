/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSWPBookmarkField : TSWPSmartField  {
    NSString *_name;
    BOOL _forRange;
    BOOL _hidden;
}

@property(retain) NSString * name;
@property BOOL forRange;
@property BOOL hidden;


- (BOOL)hidden;
- (BOOL)allowsEditing;
- (id)initWithContext:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;
- (void)setForRange:(BOOL)arg1;
- (BOOL)forRange;
- (int)attributeArrayKind;
- (int)styleAttributeArrayKind;
- (int)smartFieldKind;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
