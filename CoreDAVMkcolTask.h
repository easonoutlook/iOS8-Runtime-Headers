/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet, NSURL, <CoreDAVTaskDelegate>;

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask  {
    NSSet *_propertiesToSet;
    BOOL _sendOrder;
    int _absoluteOrder;
    NSURL *_priorOrderedURL;
}

@property <CoreDAVTaskDelegate> * delegate;
@property(retain) NSURL * priorOrderedURL;
@property int absoluteOrder;
@property(retain) NSSet * propertiesToSet;


- (id)requestBody;
- (void)setPropertiesToSet:(id)arg1;
- (id)propertiesToSet;
- (id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2;
- (id)priorOrderedURL;
- (void)setPriorOrderedURL:(id)arg1;
- (void)setAbsoluteOrder:(int)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (int)absoluteOrder;
- (id)additionalHeaderValues;
- (id)httpMethod;
- (id)initWithURL:(id)arg1;
- (id)description;
- (void)dealloc;

@end
