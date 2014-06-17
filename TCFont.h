/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TCFontFamily, NSString, NSDictionary;

@interface TCFont : NSObject  {
    NSDictionary *_namesByLanguage;
    NSString *_psName;
    TCFontFamily *_family;
    struct TCFontStyling { 
        int fontClass; 
        unsigned int stringEncoding; 
        BOOL weight; 
        BOOL italic; 
        int width; 
    } _styling;
}

@property(readonly) NSDictionary * namesByLanguage;
@property(readonly) NSString * psName;
@property(readonly) struct TCFontStyling { int x1; unsigned int x2; BOOL x3; BOOL x4; int x5; } styling;
@property TCFontFamily * family;


- (void)setFamily:(id)arg1;
- (id)family;
- (id)localizedFontName;
- (id)initWithNamesByLanguage:(id)arg1 psName:(id)arg2 styling:(struct TCFontStyling { int x1; unsigned int x2; BOOL x3; BOOL x4; int x5; })arg3;
- (struct TCFontStyling { int x1; unsigned int x2; BOOL x3; BOOL x4; int x5; })styling;
- (id)psName;
- (id)namesByLanguage;
- (id)equivalentDictionary;
- (id).cxx_construct;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (void)dealloc;

@end
