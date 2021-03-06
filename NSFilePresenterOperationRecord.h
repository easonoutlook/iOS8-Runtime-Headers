/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSFilePresenterOperationRecord : NSObject  {
    NSString *operationDescription;
    int state;
    id reactor;
}

@property(readonly) NSString * operationDescription;
@property(readonly) int state;
@property id reactor;

+ (id)operationRecordWithDescription:(id)arg1;

- (int)state;
- (id)description;
- (void)dealloc;
- (id)operationDescription;
- (id)reactor;
- (void)didEnd;
- (void)willEnd;
- (void)didBegin;
- (void)setReactor:(id)arg1;

@end
