/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask  {
    NSString *_previousScheduleTag;
    NSString *_filename;
}

@property(retain) NSString * previousScheduleTag;
@property(retain) NSString * filename;


- (void)setFilename:(id)arg1;
- (id)filename;
- (id)requestBody;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)responseData;
- (id)requestBodyStream;
- (id)additionalHeaderValues;
- (id)utf8PercentEscapedFilename;
- (id)lossyAsciiFilename;
- (id)previousScheduleTag;
- (void)setPreviousScheduleTag:(id)arg1;
- (void)dealloc;

@end
