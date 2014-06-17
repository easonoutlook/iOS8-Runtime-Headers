/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;

@interface EKRelation : NSObject  {
    NSString *_entityName;
    BOOL _toMany;
    BOOL _ownsRelated;
    NSString *_inversePropertyName;
}

@property(readonly) BOOL toMany;
@property(readonly) NSString * inversePropertyName;
@property(readonly) BOOL ownsRelatedObject;

+ (id)relationWithEntityName:(id)arg1 toMany:(BOOL)arg2 inversePropertyName:(id)arg3;
+ (id)relationWithEntityName:(id)arg1 toMany:(BOOL)arg2 inversePropertyName:(id)arg3 ownsRelated:(BOOL)arg4;

- (id)description;
- (void)dealloc;
- (id)initWithEntityName:(id)arg1 toMany:(BOOL)arg2 inversePropertyName:(id)arg3 ownsRelated:(BOOL)arg4;
- (id)inversePropertyName;
- (BOOL)ownsRelatedObject;
- (BOOL)toMany;

@end
