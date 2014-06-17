/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSDate;

@interface CKDateChatItem : CKStampChatItem  {
}

@property(retain,readonly) NSDate * date;

+ (id)thisYearDateFormatter;
+ (id)thisWeekRelativeDateFormatter;
+ (id)thePastDateFormatter;

- (id)loadTranscriptText;
- (id)date;
- (id)now;

@end