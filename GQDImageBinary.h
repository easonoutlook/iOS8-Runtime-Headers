/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDImageBinary : NSObject  {
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    struct __CFString { } *mPath;
    struct __CFURL { } *mAbsoluteUrl;
    int mResourceType;
}


- (struct __CFString { }*)relativePath;
- (int)resourceType;
- (id).cxx_construct;
- (struct CGSize { float x1; float x2; })size;
- (void)dealloc;
- (struct __CFURL { }*)createAbsoluteUrlForState:(id)arg1;
- (int)readDataAttributesFromReader:(struct _xmlTextReader { }*)arg1;

@end
