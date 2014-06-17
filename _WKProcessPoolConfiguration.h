/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSURL;

@interface _WKProcessPoolConfiguration : NSObject <NSCopying> {
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    } _injectedBundleURL;
    unsigned int _maximumProcessCount;
}

@property(copy) NSURL * injectedBundleURL;
@property unsigned int maximumProcessCount;


- (void)setInjectedBundleURL:(id)arg1;
- (id)injectedBundleURL;
- (void)setMaximumProcessCount:(unsigned int)arg1;
- (unsigned int)maximumProcessCount;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;

@end
