/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSArray, NSData, NSString;

@interface IMXMLParserContext : NSObject  {
    NSData *_inContentAsData;
}

@property(retain,readonly) NSData * inContentAsData;
@property(retain,readonly) NSString * name;
@property(retain,readonly) NSArray * resultsForLogging;


- (id)inContent;
- (id)initWithContent:(id)arg1;
- (id)initWithContentAsData:(id)arg1;
- (id)inContentAsData;
- (id)resultsForLogging;
- (void)reset;
- (id)name;
- (void)dealloc;

@end
