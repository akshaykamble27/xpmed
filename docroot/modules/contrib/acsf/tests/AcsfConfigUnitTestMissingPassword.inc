<?php

require_once __DIR__ . '/../vendor/autoload.php';

class AcsfConfigUnitTestMissingPassword extends \Drupal\Acsf\AcsfConfig {

  /**
   * Implements AcsfConfig::loadConfig().
   */
  protected function loadConfig() {
    $this->url = 'http://gardener.unit.test';
    $this->username = 'gardener_unit_test';
  }

}

