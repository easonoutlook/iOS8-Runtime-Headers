/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUSymbolicator : NSObject  {
    struct _CSTypeRef { 
        unsigned int _opaque_1; 
        unsigned int _opaque_2; 
    } _symbolicator;
}

+ (id)symbolicatorForPid:(int)arg1;
+ (id)symbolicatorForTask:(unsigned int)arg1;

- (id)symbolForAddress:(unsigned long long)arg1;
- (id)sourceInfoForAddress:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1;

@end
