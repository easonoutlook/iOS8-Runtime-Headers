/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSData, NSMutableString;

@interface CPArchive : NSObject <CPDisposable> {
    struct __CFArray { } *selections;
    struct __CFArray { } *imageNodes;
    NSMutableString *plainText;
    NSMutableString *htmlString;
    NSMutableString *htmlStringNoImages;
    NSData *webArchiveData;
}


- (id)webArchiveData;
- (id)html;
- (id)plainText;
- (void)addSelection:(struct CGPDFSelection { }*)arg1;
- (void)dispose;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end