/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSURL;

@interface CAMLWriter : NSObject  {
    struct _CAMLWriterPriv { struct __CFData {} *x1; struct __CFURL {} *x2; id x3; struct _CAMLWriterElement {} *x4; struct __CFString {} *x5; struct __CFSet {} *x6; int x7; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; } *_priv;
}

@property(retain) NSURL * baseURL;
@property id delegate;

+ (id)writerWithData:(id)arg1;

- (void)endElement;
- (void)encodeObject:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (id)baseURL;
- (id)initWithData:(id)arg1;
- (id)delegate;
- (void)_writeElementTree:(struct _CAMLWriterElement { struct _CAMLWriterElement {} *x1; struct _CAMLWriterElement {} *x2; struct _CAMLWriterElement {} *x3; struct _CAMLWriterElement {} **x4; void *x5; struct __CFString {} *x6; struct _CAMLWriterAttribute {} *x7; struct _CAMLWriterAttribute {} **x8; struct __CFString {} *x9; unsigned int x10; }*)arg1;
- (id)URLStringForResource:(id)arg1;
- (void)setElementContent:(id)arg1;
- (void)beginElement:(unsigned int)arg1;
- (void)beginPropertyElement:(id)arg1;
- (void)setElementAttribute:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
