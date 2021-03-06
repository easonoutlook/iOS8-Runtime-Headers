/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSSet, NSDictionary;

@interface PKDiscoveryDriver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSDictionary *_attributes;
    unsigned int _flags;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _report;

    NSSet *_lastResults;
    int _annotationNotifyToken;
}

@property(retain) NSDictionary * attributes;
@property unsigned int flags;
@property(copy) id report;
@property(retain) NSSet * lastResults;
@property int annotationNotifyToken;


- (id)initWithAttributes:(id)arg1 flags:(unsigned int)arg2 report:(id)arg3;
- (void)setAnnotationNotifyToken:(int)arg1;
- (void)performWithPreviousResults:(id)arg1 forceNotify:(BOOL)arg2;
- (void)setLastResults:(id)arg1;
- (int)annotationNotifyToken;
- (id)lastResults;
- (void)setFlags:(unsigned int)arg1;
- (id)report;
- (unsigned int)flags;
- (void)setReport:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void).cxx_destruct;
- (id)attributes;
- (void)cancel;
- (void)pluginsDidUninstall:(id)arg1;
- (void)pluginsDidInstall:(id)arg1;
- (void)dealloc;

@end
