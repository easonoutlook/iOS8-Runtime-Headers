/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL, NSString;

@interface _UIDocumentStorage : NSObject  {
    NSString *_scope;
    NSURL *_rootURL;
}

@property(readonly) NSURL * rootURL;
@property(getter=isUbiquitous,readonly) BOOL ubiquitous;


- (id)rootURL;
- (BOOL)isUbiquitous;
- (id)initWithSearchScope:(id)arg1 rootURL:(id)arg2;
- (void)dealloc;

@end
