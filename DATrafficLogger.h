/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DATrafficLogger : NSObject  {
    NSString *_filename;
}

@property(retain) NSString * filename;

+ (BOOL)enabled;

- (void)setFilename:(id)arg1;
- (id)filename;
- (id)initWithFilename:(id)arg1;
- (void)slurpAndRemoveLookasideFile:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3;
- (void)logSnippet:(id)arg1;
- (void)_ensureCustomLogFile;
- (void).cxx_destruct;

@end
