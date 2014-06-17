/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;

@interface PFUBLogEventID : NSObject  {
    NSString *_idString;
    int _hash;
    int _eventType;
}

@property(readonly) NSString * idString;
@property(readonly) int hash;
@property(readonly) int eventType;

+ (void)initialize;

- (int)hash;
- (int)eventType;
- (id)idString;
- (id)initWithCustomKey:(id)arg1;
- (id)initWithEventType:(int)arg1;

@end
