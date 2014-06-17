/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSError, NSString;

@interface CKZonePCSDiagnosticInformation : NSObject <NSSecureCoding> {
    BOOL _wasRepaired;
    int _pcsStatus;
    NSString *_pcsDiagnosticString;
    NSError *_pcsError;
}

@property BOOL wasRepaired;
@property int pcsStatus;
@property(retain) NSString * pcsDiagnosticString;
@property(retain) NSError * pcsError;

+ (BOOL)supportsSecureCoding;

- (void)setWasRepaired:(BOOL)arg1;
- (int)pcsStatus;
- (void)setPcsDiagnosticString:(id)arg1;
- (void)setPcsStatus:(int)arg1;
- (void)setPcsError:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pcsError;
- (id)pcsDiagnosticString;
- (BOOL)wasRepaired;

@end
