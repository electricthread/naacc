<?php
//kpr(get_defined_vars());
//kpr($theme_hook_suggestions);
//template naming
//page--[CONTENT TYPE].tpl.php
?>
<?php if( theme_get_setting('mothership_poorthemers_helper') ){ ?>
<!-- page.tpl.php-->
<?php } ?>

<?php print $mothership_poorthemers_helper; ?>

<header role="banner">
  <div class="outer-container"
    <figure>
      <a id="logo" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">Home</a>
    </figure>
    <?php if($page['header']): ?>
      <span id="menu">m</span>
      <ul id="social">
        <li><a href="/user">Login</a></li>
        <li><a class="social" target="_blank" href="https://twitter.com/NashvilleAACC">t</a></li>
        <li><a class="social" target="_blank" href="https://facebook.com">f</a></li>
      </ul>
      <?php print render($page['header']); ?>
    <?php endif; ?>
  </div>
</header>
<?php if($page['hero'] || $is_front): ?>
  <div id="hero">
    <?php print render($page['hero']); ?>
    <div class="wrap">
      <div class="outer-container">
        <h2>The <strong>Nashville Area Association of Christian Counselors</strong> is an organization for Christian professionals who work in counseling, ministry, psychiatry, psychology, social work, and other related career fields.</h2>
        <a class="btn grn" href="/join">Become a Member</a>
      </div><!--outer-container-->
    </div><!--wrap-->
  </div>
<?php endif; ?>

<?php if($page['pre_content']): ?>
  <div id="pre-content">
    <div class="outer-container">
      <?php print render($page['pre_content']); ?>
    </div><!--outer-container-->
  </div>
<?php endif; ?>

<div class="page">
  <?php if (!$is_front): ?>
    <div id="title-area">
      <div class="outer-container">
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h1><?php print $title; ?></h1>
        <?php endif; ?>
        <?php if (isset($profile)): ?>
          <div class="profile-title">
            <h2>Our Counselors</h2>
            <a id="counselors" href="/members">View All Counselors</a>
          </div>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <a href="/join" class="btn">Join the Community</a>
      </div>
    </div>
  <?php endif; ?>
  <div class="outer-container">
    <div role="main" id="main-content" class="<?php if ($page['sidebar']): ?>with-side<?php endif; ?>">

      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>

      <?php if (isset($tabs['#primary'][0]) || isset($tabs['#secondary'][0])): ?>
        <nav class="tabs"><?php print render($tabs); ?></nav>
      <?php endif; ?>

      <?php if($page['highlighted'] OR $messages){ ?>
        <div class="drupal-messages">
        <?php print render($page['highlighted']); ?>
        <?php print $messages; ?>
        </div>
      <?php } ?>


      <?php print render($page['content_pre']); ?>

      <?php print render($page['content']); ?>

      <?php print render($page['content_post']); ?>

    </div><!-- /main-->

    <?php if ($page['sidebar']): ?>
      <div class="sidebar">
      <?php print render($page['sidebar']); ?>
      </div>
    <?php endif; ?>

  </div><!--outer-container-->
</div><!-- /page-->

<footer role="contentinfo">
  <?php print render($page['footer']); ?>
</footer>

