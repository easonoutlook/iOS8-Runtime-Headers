/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSDate, NSString;

@interface BSTransactionAuditHistoryItem : NSObject  {
    NSDate *_date;
    NSString *_category;
    NSString *_description;
}

+ (id)itemWithDescriptionWithFormat:(id)arg1;
+ (id)itemWithDescription:(id)arg1;

- (id)initWithDescription:(id)arg1;
- (id)_timeFormatter;
- (id)description;
- (void)dealloc;

@end