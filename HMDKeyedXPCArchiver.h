/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class NSKeyedArchiver;

@interface HMDKeyedXPCArchiver : NSObject  {
    NSKeyedArchiver *_archiver;
}

@property(retain) NSKeyedArchiver * archiver;


- (id)archiver;
- (void)setArchiver:(id)arg1;
- (void).cxx_destruct;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)_configure;
- (void)finishEncoding;
- (id)initForWritingWithMutableData:(id)arg1;

@end
