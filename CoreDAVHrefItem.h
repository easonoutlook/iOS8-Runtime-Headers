/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem  {
    NSURL *_baseURL;
    int _writeStyle;
}

@property int writeStyle;
@property(retain) NSURL * baseURL;


- (void)write:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setWriteStyle:(int)arg1;
- (int)writeStyle;
- (id)payloadAsOriginalURL;
- (void)parserSuggestsBaseURL:(id)arg1;
- (id)payloadAsFullURL;
- (id)baseURL;
- (id)initWithURL:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
