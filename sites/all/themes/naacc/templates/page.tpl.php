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
      <?php print render($page['header']); ?>
    <?php endif; ?>
  </div>
</header>

<div class="page">
  <div id="title-area">
    <div class="outer-container">
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <a href="/join" class="btn">Join the Community</a>
    </div>
  </div>
  <div class="outer-container">
    <div role="main" id="main-content">

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

    <?php if ($page['sidebar_first']): ?>
      <div class="sidebar-first">
      <?php print render($page['sidebar_first']); ?>
      </div>
    <?php endif; ?>

    <?php if ($page['sidebar_second']): ?>
      <div class="sidebar-second">
        <?php print render($page['sidebar_second']); ?>
      </div>
    <?php endif; ?>
  </div><!--outer-container-->
</div><!-- /page-->

<footer role="contentinfo">
  <?php print render($page['footer']); ?>
</footer>

