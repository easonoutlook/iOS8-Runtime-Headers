/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UITableView, NSString, CertInfoCertificateHeaderCell, NSDate, CertInfoCertificateSummaryDescriptionCell;

@interface CertInfoCertificateSummaryView : UIView <UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
    NSString *_trustTitle;
    NSString *_trustSubtitle;
    NSString *_purpose;
    NSDate *_expirationDate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _moreDetailsSelectedBlock;

    CertInfoCertificateHeaderCell *_headerCell;
    CertInfoCertificateSummaryDescriptionCell *_descriptionCell;
}

@property(readonly) UITableView * tableView;
@property(retain) NSString * trustTitle;
@property(retain) NSString * trustSubtitle;
@property(retain) NSString * purpose;
@property(retain) NSDate * expirationDate;
@property(retain) CertInfoCertificateHeaderCell * headerCell;
@property(retain) CertInfoCertificateSummaryDescriptionCell * descriptionCell;


- (void)setDescriptionCell:(id)arg1;
- (id)descriptionCell;
- (void)setExpirationDate:(id)arg1;
- (id)expirationDate;
- (id)purpose;
- (void)setPurpose:(id)arg1;
- (id)headerCell;
- (void)_configureCell:(id)arg1;
- (id)_cellForReuseIdentifier:(id)arg1;
- (void)setHeaderCell:(id)arg1;
- (void)setMoreDetailsSelectedBlock:(id)arg1;
- (void)setTrustSubtitle:(id)arg1;
- (id)trustSubtitle;
- (void)setTrustTitle:(id)arg1;
- (id)trustTitle;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
