/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKObject, NSString;

@interface EKObjectRelation : NSObject  {
    EKObject *_owner;
    NSString *_relationName;
    BOOL _dirty;
    BOOL _loaded;
    NSString *_inverseName;
}

@property(readonly) EKObject * owner;
@property(readonly) NSString * relationName;
@property(readonly) NSString * inverseName;


- (void)rollback;
- (BOOL)validate:(id*)arg1;
- (void)reset;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)owner;
- (BOOL)isDirty;
- (void)dealloc;
- (id)relationName;
- (void)_removeRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3;
- (void)_addRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3;
- (BOOL)isWeak;
- (id)inverseName;
- (void)relatedObjectDidChange;
- (id)committedValue;
- (void)updatePersistentObject;
- (id)initWithOwner:(id)arg1 relationName:(id)arg2 inverseRelationName:(id)arg3;
- (void)didCommit;
- (void)refresh;

@end
