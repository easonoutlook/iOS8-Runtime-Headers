/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject, NSString, TSWPStorage;

@interface TSWPStorageIterationEvent : NSObject  {
    NSString *_providerIdentifier;
    int _type;
    NSObject *_object;
    TSWPStorage *_storage;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
}

@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property(readonly) int type;
@property(readonly) NSString * identifier;
@property(readonly) NSObject * object;
@property TSWPStorage * storage;

+ (id)characterEventWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
+ (id)eventWithType:(int)arg1 providerIdentifier:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 object:(id)arg4;

- (id)storage;
- (id).cxx_construct;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)object;
- (int)type;
- (id)identifier;
- (id)description;
- (void)dealloc;
- (BOOL)isRangeEnd;
- (id)initWithCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithType:(int)arg1 providerIdentifier:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 object:(id)arg4;
- (void)setStorage:(id)arg1;

@end
